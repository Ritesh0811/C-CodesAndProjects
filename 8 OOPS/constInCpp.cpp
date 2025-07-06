#include<iostream>
#include<string>

using namespace std;

//const keyword is used to set function immutable throughout code execution.

class abc{

    private:
        int x;
        int *y;

    public:
        abc(){
            x=0;
            y=new int[0];
        }

        int getX() const{
            // x = 50; // we use const keyword, we cant change x value with assignment operation.
            return x;
        }

        void setX(int _val){
            x = _val;

        }

        int getY(){
            return *y;
        }

        void setY(int _val){
            *y = _val;

        }

};

int main(){

    abc a;
    cout << a.getX() << endl;
    cout << a.getY() << endl;

    return 0;
}





int main2(){

    const int x = 100; //we cant change this after declaration with const
    //x=10; // this is invalid

    //2. Pointers
    int *a= new int;
    *a = 2;
    cout << *a << endl;
    delete a;

    int b=5;
    a=&b;

    cout << *a <<endl;

//**************************************************************************************************
    //Const with Pointers --> Const Data - Non Const Pointers
    const int *ptr=new int(2); //int const *ptr = new int(2); both are same

    cout << *ptr << endl;
    // *ptr=20; // we cant change a value of pointer as its const in line 26
    // cout << *ptr << endl;

    int val=20;
    ptr = &val;
    cout << *ptr << endl; //this way we are changing referene of ptr to b and hence allowed.

//**************************************************************************************************
    //Const with Pointers --> Const Pointer - Non Const Data
    int *const ptr1 = new int(2);
    cout << *ptr1 << endl;

    *ptr1 = 200; // chalega since its * is before const word.

     cout << ptr1 <<endl;

     int val2 = 50;
     // ptr1 = &val2 ; // not allowed as pointer is constant

//**************************************************************************************************
    //Const with Pointers --> Const Pointer -Const Data

    const int *const ptr3 = new int(100);
    cout << *ptr3 << endl;

    // *ptr3 = 200; // cant modify content
    int val3 = 500;

    // ptr3 = &val3; //cant modify pointer


    return 0;
}