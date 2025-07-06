#include <iostream>
#include <vector>

using namespace std;

//  array with pointers

int main(){

    int arr[5] = {1,2,3,4,5};

    // here "arr" print kia to it will showcase the base address of array == &arr == &arr[0] -- all prints base address

    cout << arr <<endl; // prints base address.

    cout << *(arr+1) << endl; //it should print 2 -- that is base address + one address's value -- 2

    cout << (*arr)+1 << endl; // this shall be 1st value + 1 --- 1+1 == 2

    int a = 5;

    int* p = &a;
    // cout << *p << endl;
    cout << "p's base addr" << p << endl;
    cout << "p's current val - addr of a -->" << *p << endl;

    p = p + 1;

    cout << "Ps new addr? since p=p+1" << p << endl;

    cout << "p's next val should be r? -->" << *p << endl;

    return 0;
}