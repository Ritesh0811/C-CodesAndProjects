#include <iostream>
#include <string.h>
#include <vector>


using namespace std;

int main(){

    string name; // defination

    cin >> name; // user ip

    //find lenght
    cout << "Inputed string lenght- "<< name.length() << endl;

    //find if empty
    cout << "Is empty- " << name.empty() <<endl;

    //at position
    cout << "Value at position- " << name.at(0) <<endl;

    //name.front() --first element
    //name.back() -- last element

    //append - concatinate strings -- str1.append(str2)
    string name1="Ritesh";
    string name2 ="Kapse";

    name1.append(name2);

    cout << "Appended strings-" << name1 << endl;

    //erase
    string desc= "This is a car";
    desc.erase(4,3); // here 4 is index and 3 is the number of elemets that need to be erased.

    cout <<desc <<endl;

    //insert
    string name3 ="Ritesh Kapse";
    string middle = "Ravindra";

    name3.insert(6,middle);

    cout << name3 <<endl;

    //name.push_back('R'); here 'R' is value , you can add any string
    //name.pop_back();

    //find -- string1.find(string2)  it will find string 2 value in string 1 variable
    //agar mil gae to op aaega warna it will print "npos" - no position found.

    string str1 = "yaar tere super star desi kalakar";
    string str2 = "star";

    if(str1.find(str2)== string::npos){ //matlab string class me str2 nai mila to npos return karega
        cout << "Not found";
    }else{
        cout << "Found";
    }

    //compare -- str1.compare(str2)==0 -- check if both are equal then op's the 0 else ops 1.

    //substring
    // str1.substr(ye index se, itni length);


    return 0;
}