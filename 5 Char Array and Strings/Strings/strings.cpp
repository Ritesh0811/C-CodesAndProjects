#include <iostream>
#include <string.h>
#include <vector>
using namespace std;



int main(){

    //creation
    string name;

    //input
    //cin >> name; // for single word

    //multilines inp
    getline(cin,name); //cin.getline(ch,size) -- for char array

    //output
    cout << "The inputted values are - " << name << endl;

    //print index wise
    cout << name[2] << endl;

    //check until null char
    int index=0;

    while(name[index]!='\0'){
        cout <<"index: " << index <<" char" << name[index] << endl;
        index ++;
    }

    //for loop

    return 0;
}