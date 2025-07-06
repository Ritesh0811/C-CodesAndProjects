#include <iostream>
using namespace std;

int main() {

    int b=100;
    int ans = (b << 3); //left shift - n times then a*2(power n)

    cout << "Left Shift OP " <<ans << endl;

    //right shift operator

    int op = (b >> 2); //right shift - n times then a/2(power n)

    cout << "Right shift OP " << op << endl;

    //pre and post increment - ++a and a++
    int a = 41;

    cout << ++a <<endl;

    cout << a++ <<endl;

    //
    int d=10;

    cout << ((++d) * (d++)) <<endl;
    //cout << ((d++) * (++d)) <<endl;


    //break and continue

    // int z;
    // for(int z=0; z<5; z++){

    //     cout << z <<endl; // 3 will be printed

    //     if(z==3){
    //         break;
    //     }

    //     cout <<z <<endl; // 3 will not be printed

    // }

    int y;
    for(int y=0; y<5; y++){

        //cout << y <<endl; // 3 will be printed

        if(y==3){
            cout <<"in" <<endl;
            continue;
            cout <<"out" <<endl;
        }

        cout <<y <<endl; // 3 will not be printed

    }



    return 0;


}