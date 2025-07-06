#include <iostream>

using namespace std;

//writing macros -- defining something which we use multiple times in code
#define PI 3.141516  //note-  dont use semi-colon after macros defination

#define MAXX(x,y)(x>y ? x : y)

float CircleArea(float r){

    return PI * r * r;
}

//using macros here
void fun(){
    int a = 2;
    int b = 10;

    int c = MAXX(a,b); //this micro checks if a greater than b? if so return a else return b
}

int main(){

    cout << CircleArea(64.44) <<endl;
    return 0;

}



//note -
//in C++, default arguments are written at rightmost of the arguments passed to function.