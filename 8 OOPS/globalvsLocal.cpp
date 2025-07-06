#include<iostream>
#include<string>
#include<vector>

using namespace std;

//OOPS

int x=10; //global declaration

int main(){

    x=20; // changing global x value to 20
    int x=100; //local declaration
    cout << x << endl; // local
    cout << ::x << endl; //global

    x = 200; // changing local x value to 200
    cout << x << endl;

    return 0;
}