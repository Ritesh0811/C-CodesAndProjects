#include <iostream>
#include <vector>

using namespace std;

//reference variable is same memory with different name - hence pointer is different

//poiter -- it stores the address of variable by creating seperate memory address.

// Note : Do not declare the pointer at begining as it will assign the garbage address which we cant access
// eg -- int* ptr ; -- this is not corect way as ot wil store any random address. cout << *ptr -- runtime error


//int* ptr=0; this is fine - Null Pointer. // or nullptr -- it will still give error

int main(){

    //pointers
    int a=5;

    cout << a<< endl;
    cout << &a << endl; // address of a

    int* ptr = &a;

    cout << *ptr << endl; // it prints the value of address stored in ptr.

    cout <<&ptr << endl; //address of ptr pointer - it will be different from value[address of a] stored in ptr.

    cout << " op 0--" << sizeof(ptr) << endl; //prints the size of pointer.

    char ch='H';

    char* ptr1=&ch;

    cout << " op 1--" << sizeof(ptr1);

    long val = 10;

    long* ptr2=&val;

    cout << " op 2--"  << sizeof(ptr2) <<endl;

    //in short sare pointers ka size - 4bytes - kyu ki pointer k andar hamesha address store hoga irrespective of value rahega.

    return 0;
}