#include <iostream>
using namespace std;


int main(){

    int money[127];

    char alpha[26];

    bool flags[27];

    long num[900];

    short snum[1000];

    cout << "Arrays Created !" <<endl;

    int a=5;

    cout << &a << endl;  // address of -- &

    cout << "Base address of array is: "<< &money << endl;  // here &money or simply money will give base address

    cout << "Size of array: " << sizeof(money) << endl; // integer is 4 bytes size -- Hence total == 127*4

    return 0;
}
