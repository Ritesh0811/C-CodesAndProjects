#include<iostream>
#include<string>

using namespace std;

//Initialization List
class abc{

    private:
        int x;
        int *y;
        int z;

    public:

        //ctor -- old way
        // abc(int _x, int _y, int _z=0){

        //     x= _x;
        //     y= new int(_y);
        //     z= _z;

        // }

        //initialization list way --> New Way
        abc(int _x, int _y, int _z=0) : x(_x), y(new int(_y)),z(_z){}

        //use of new initialization way -
        // if while declaration, i declare as const int z; then it wont allow to set z value in old way of constructor
        //but with new way of initialization , with const int z ; also we can change z value.

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

    abc a(10,100,10);
    cout << a.getX() << endl;
    cout << a.getY() << endl;

    return 0;
}


