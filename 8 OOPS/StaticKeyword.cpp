#include <iostream>
#include <vector>
#include <string>

using namespace std;


//***************************This is normally how class works WITH static Member Function declaration***********************
class Student{

    private:

    public:

        int x,y;

        //setting x and y values to 0
        Student() : x(0),y(0){}

        //this member function wil not be obj specific, it will be class specific
        static void print() {
            // we cant access x and y inside static fun and it dont have this pointer and it doest refer to any obj
            printf("I am in static %s\n",__FUNCTION__);
        }

};

int main(){

    Student s1 ;

    //static function is class specific and not obj specific
    Student::print();
    //we can call as --> s1.print() too.

    Student s2;

    Student::print();
    Student::print();

    return 0;
}


//***************************This is normally how class works WITH static vari declaration***********************
/*
class Student{

    private:

    public:

        //static data member
        static int x,y; //agar static declare karoge to sare obj call me jaga same x and y update hoga
        //inko alag se class k bahar and main se pehle initialize karna padta hai

        void print() const{
            cout << x << " " << y <<endl;
        }

};

//declaring static x and y outside class
int Student::x;
int Student::y;


int main(){

    Student s1 ;
    s1.x=100;
    s1.y=200;

    s1.print();

    Student s2;

    s2.x=1000;
    s2.y=2000;
    //yaha s1 obj k x and y bhi static k wajese 1000,2000 print hote hai
    s1.print();
    s2.print();

    return 0;
}
*/

//***************************This is normally how class works WITHOUT static vari declaration***********************
/*
class Student{

    private:

    public:

        int x,y;

        //ctor
        // Student(){

        //     cout << "This is default ctor" <<endl;
        //     return;
        // }

        void print() const{

            //har bar jab print() call hota hai diff objs se, there is hidden "this" pointer called for each call
            //us "this" pointer k wajese c++ can differentiate values of inputs for particular obj.
            //"this" is the pointer
            //cout << this->x << " " << this->y <<endl;  is same as below.

            cout << x << " " << y <<endl;
        }

};


int main(){

    Student s1 = {1, 2};
    Student s2 = {10, 20};

    s1.print();
    s2.print();

    return 0;
}

*/