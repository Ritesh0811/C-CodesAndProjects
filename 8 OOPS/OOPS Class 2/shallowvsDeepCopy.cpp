#include <iostream>
#include <string>
#include <vector>

class abc{

    private:

    public:

        int x, *y;

        //normal param constructor
        abc(int _x, int _y): x(_x), y(new int(_y)){};

        // //default copy constructor -- it does Shallow copy -- By Default compiler will do this.
        // abc(const abc &obj){
        //     x = obj.x;
        //     y = obj.y;
        // }

        //Deep copy constructor --
        abc(const abc &obj){
            x = obj.x;
            y = new int(*obj.y);
        }

        void print() const{

            printf("X:%d\nPTR Y:%p\nContent of Y(*y):%d\n\n",x,y,*y);
        }

        //write destructor to free the heap memory we utilized while creating deep copy ctor.
        ~abc(){
            delete y;
        }
};

int main(){

    abc a(1,2);
    a.print();

    //abc b(a)
    abc b=a; //call hota hai copy constructor [if not wriiten by dev, default copy ctor gets called.]
    b.print();

    return 0;
}


//Note - When we use pointers in code, try to only use deep copy as shallow copy will cause malloc: double free of obj error once
// we try to delete the original object.