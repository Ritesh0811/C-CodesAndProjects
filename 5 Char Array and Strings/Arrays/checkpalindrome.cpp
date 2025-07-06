#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

//palindrome - left to right and right to left same to same. -- time complexity -- O(n)

bool palindrome(char ch[], int n){

    //n -- length of string

    int i=0;
    int j=n-1;

    while(i<=j){

        if(ch[i]==ch[j]){
            i++;
            j--;
        }else{

            // iska matlab age and piche wale char same nai hai hence return false
            return false;
        }
    }

    //agar false return nai hua to matlab sare match kar gae if loop me - return true

    return true;

}


int main(){

    char ch[10];

    cin.getline(ch,100);

    cout << "Before palindrome check - Input Given " <<ch <<endl;

    int length = strlen(ch);


    bool val = palindrome(ch, length);

    if(val == true){
        cout << "Inputted string is VALID palindrome string !";
    }else{
        cout << "Inputted string is NOT palindrome string !";
    }

    return 0;
}