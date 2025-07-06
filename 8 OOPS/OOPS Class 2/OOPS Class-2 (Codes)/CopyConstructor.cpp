#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Note - Getter and Setter to access the privately or any public defined variables inside the class.

class Student{

    private:

        string sample; //can be accessed using getter method

    public:

        int x,y;

        //default constructor
        Student(){
            cout << "Default constructor called"<<endl;
        }

        //parameterized constructor - with this pointer
        Student(int x, int y, string sample){
            cout << "Parameterized constructor called"<<endl;
            this->x = x;
            this->y = y;
            this->sample = sample;
        }

        //copy constructor - with this pointer -- Note - 'const' is small and not capital C.
        Student(const Student &srcobj){
            //to not let anyone change srcobj data, we use const keyword --> srcobj.x = 10 -- aaise nai allowed hona chaiye
            //&srcobj becoz to create a copy we need reference values and hence & is used.

            cout << "Copy constructor called"<<endl;
            this->x = srcobj.x;
            this->y = srcobj.y;
        }

        //destructor - default will be called by compiler if we dont define destructor. DOnt forget ~ sign.
        ~Student(){
            cout << "Destructor called" <<endl;
        }

        //getter method
        string getname(){
            return sample;
        }

        //Setter method -- Setter will be void and getter with resp inp element.
        void setname(string sample){
            this->sample = sample;
        }
};


int main(){

    Student s3; //Default constructor called
    Student s1(10, 20, "RItesh") ; //Parameterized constructor called
    Student s2=s1; //Copy constructor called

    //Note - Copy constructor is called only during construction hence while creating obj , assign and create -- > Student s2=s1
    // Do not try writing on seperate line after obj s2 creation like -- > Student s2, s2=s1

    //calll getter method
    cout << s1.getname() <<endl;

    s1.setname("Shweta");

    cout << s1.getname() <<endl;

    return 0;
}


//Why we need copy constructor --
// For Deep Copy .

//Copy = Shallow copy -- with diff memory to refer
//Deep Copy --> With same memory and values


// Why destructor ?
// if we create any pointer reference inside the public defination of class
// and while using inside the function , if we are referring pointer to memory in heap, we need to delete the memory
// to delete the memory, we use destructor and inside destructor we can wrte " delete v ".

