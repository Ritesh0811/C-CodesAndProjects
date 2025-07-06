#include<iostream>
#include<string>

using namespace std;

class Student{

    private:

        int sample;
        //Student *this --> this pointer is privately added by compiler [ chupa element which points current obj]


    public:
        int id; // -- 4 byte
        int age;
        //char c; // -- 1 byte
        bool present;  // -- 1 byte
        //double e;  // -- 8 byte
        string name;  // -- 24 byte -- in build function as we #include<string>
        int nos;

        //constuctor - Default - If we are not writing , it will add this default constructor.
        //always defined in public section
        //default constructor assigns garbage value to elements if not assigned.
        Student(){
            cout << "Student Ctor is called" <<endl;
        }

        //Another parameterized constructor --> we are using  _name params to differentiate with class elements
        Student(int _id, int _age, bool _present, string _name, int _nos){

            id = _id;
            age = _age;
            present = _present;
            name = _name;
            nos = _nos;
            cout << "Student Parameterized Constructor" << endl;

        }

        //Another constructor with this pointer to differentiate with class elements.
        Student(int id, int age, bool present, string name, int nos){

            this->id = id; // this->id matlab class me defined ele is equal to constrctor me bahar se aaya inp.
            this->age = age;
            this->present = present;
            this->name = name;
            this->nos = nos;
            cout << "Student Parameterized Constructor" << endl;

        }

        //methods of the class -
        void Study(){
            cout << "Studying " << endl;
        }

        void Sleep(){
            cout << "Sleeping " << endl;
        }

        void Bunk(){
            cout << "Bunking " << endl;
        }

};

int main(){

    Student s1; //agar public word nai use kia to it will be default private and we cant aceess them outside class.
    //while creating object s1, I didnt give any parameters hence default constructor is called.

    Student s2(10, 12, 1, "Ritesh", 100); //when we give params, parameterized constructor is called.
    cout << s2.name <<endl;
    cout << s2.id <<endl;

    //cout<< sizeof(Student) <<endl;
    cout << s1.id <<endl; //default constructor will assign the garbage value to the elements of class if not defined.

    //Note - above when we created obj s1 , default constructor is called.
    // when we created obj s2, then parameterized construcot is called.
    // we didnt mentioned which one to call, hence Student() function has many forms and hence called PolyMorphrism.

    return 0;
}

//this -> pointer
// when we call constructor from with same elements(without using '_name' and simply using 'name') name which are already defined inside the class.
// to avoid the confusion , we use "this->" to refer class inside elements with called elements from


//Allocating class at stack vs heap memory
// stack --> int arr[5];
// heap -- > int* ptr = new int[5];


//stack --> Student s1;
//heap --> Student* s = new Student(<values of constructor>);

//access from stack --> s1.name;

//access from heap
//Ex --> Student *s4 = new Student(3,34,1,"Ritesh",6);
// print name of s4 --> "cout << s4->name <<endl;" OR "cout<< (*s4).name << endl;"

//if we are allocating on heap, you need to delete also by below command--
//delete s4;