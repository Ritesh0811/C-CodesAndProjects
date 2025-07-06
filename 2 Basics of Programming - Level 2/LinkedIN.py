import os
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from bs4 import BeautifulSoup
from openpyxl import Workbook
from datetime import date
from selenium.webdriver.common.by import By

#from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager

#driver = webdriver.Chrome(ChromeDriverManager().install())


# Function to initialize the web driver
def initialize_driver():
    driver = webdriver.Chrome(ChromeDriverManager().install())
    #driver = webdriver.Chrome()  # You'll need to have ChromeDriver installed
    return driver

# Function to search for candidates on LinkedIn
def search_linkedin_candidates(driver, keywords):
    driver.get("https://www.linkedin.com")

    # Log in to LinkedIn using your credentials here
    # You can automate login if you want, but it's more secure to log in manually

    # Wait for the user to complete the login manually
    input("Press Enter after logging in...")

    driver.maximize_window() # For maximizing window
    driver.implicitly_wait(5) # gives an implicit wait for 5 seconds

    # Navigate to the LinkedIn search page
    driver.get("https://www.linkedin.com/search/results/people/")

    # Enter keywords into the search bar
    #search_box = driver.find_element_by_name("keywords")
    search_box = driver.find_element(By.CLASS_NAME, "search-global-typeahead__input")
    search_box.clear()
    search_box.send_keys(keywords)
    search_box.send_keys(Keys.RETURN)

    # Wait for the search results to load
    time.sleep(5)

# Function to scrape profile URLs from LinkedIn search results
def scrape_linkedin_profiles(driver):
    profile_urls = []

    # Scroll down the page to load more search results (you may need to adjust this based on your needs)
    # for _ in range(3):
    #     driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
    #     time.sleep(3)

    # Extract profile URLs from the page
    soup = BeautifulSoup(driver.page_source, "html.parser")
    for link in soup.find_all("a", class_="app-aware-link"):
        url = link.get("href")
        if "/in/" in url:
            profile_urls.append("https://www.linkedin.com" + url)

    return profile_urls

# Function to save profile URLs to an Excel sheet
def save_to_excel(profile_urls):
    today = date.today().strftime("%Y-%m-%d")
    filename = f"Candidate_Profiles_{today}.xlsx"

    workbook = Workbook()
    sheet = workbook.active
    sheet.append(["Serial Number", "Date", "LinkedIn Profile URL"])

    for idx, url in enumerate(profile_urls, start=1):
        sheet.append([idx, today, url])

    workbook.save(filename)

# Main function
def main():
    keywords = input("Enter the keywords to search for on LinkedIn: ")

    driver = initialize_driver()
    search_linkedin_candidates(driver, keywords)

    profile_urls = scrape_linkedin_profiles(driver)
    if not profile_urls:
        print("No profiles found.")
        driver.quit()
        return

    save_to_excel(profile_urls)
    print(f"Profile URLs saved to Excel file.")

    driver.quit()

if __name__ == "__main__":
    main()
