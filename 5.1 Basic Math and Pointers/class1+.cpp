#include <iostream>
#include <vector>

using namespace std;


//Note- 1 byte is smallest addressable space
// Hence even bool can be fit in 1 bit , usko 1byte[8bits] ka memory allocation hota hai kyu ki 1 byte is smallest available.


int main(){

    int a=10;

    int* ptr =&a; // this stores address of a

    a=a+1;

    cout << a << endl;

    *ptr = *ptr +1; //*ptr == a i.e it can access a value.

    cout << a << endl;



    return 0;

}