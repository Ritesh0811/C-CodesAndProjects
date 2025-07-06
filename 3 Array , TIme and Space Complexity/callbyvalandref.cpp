#include <iostream>
using namespace std;

//call by reference
int increment(int&a){

    a = a+2;
    cout << "Value of a inside call by reference increment functn is: " << a << endl;
    return a;

}


// // //call by value
// int increment(int a){

//     a = a+2;
//     cout << "Value of a inside call by value functn is: " << a << endl;
//     return a;

// }

int main(){

    int a = 30;
    increment(a);


    cout << "Value of a in main function is: " << a << endl;

    return 0;
}