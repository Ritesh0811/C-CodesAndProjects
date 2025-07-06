#include <iostream>
#include <vector>

using namespace std;


int main(){

    int arr[5] = {1,2,3,4,5};

    //pointer to array
    int* ptr1 = arr ;   // this points to base address of array arr

    //this will cause error
    //int* ptr = &arr; -- here we are trying to assign single ptr with array


    //pointer to array - all elements

    int (*ptr)[5] = &arr; // here ptr of size 5 is pointing to add of array with size 5

    cout << (*ptr)[0] << endl ; // this will print first element of array


    // array of pointers
    int* brr[5];

    brr[0] = &arr[0];
    brr[1] = &arr[1];

    cout << *brr[0] << endl; // it will print 1


    return 0;
}