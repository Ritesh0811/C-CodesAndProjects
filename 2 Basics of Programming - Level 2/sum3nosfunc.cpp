#include <iostream>

using namespace std;

//sum of 3 nos

//to print use void , to return use int
// void sumofnos(int a, int b, int c){

//     int sum = a+b+c;

//     cout << "Sum of 3 numbers is: " << sum << endl;

// }

int sumofnos(int a, int b, int c){

    int sum = a+b+c;

    return sum;

}

int main(){

    //sumofnos(100,2009,22) ;  // for void function.

    int result;
    result = sumofnos(100,2009,22);

    cout << result << endl;

    return 0;
}