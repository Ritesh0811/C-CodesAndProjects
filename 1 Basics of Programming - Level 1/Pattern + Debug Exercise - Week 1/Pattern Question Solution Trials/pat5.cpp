#include <iostream>

using namespace std;

int main(){


    //pattern trials

    int N=6;
    int rows;

    // //Half Number Pyramid
    // for(int rows=0; rows<N ; rows=rows+1){

    //     for(int cols=0; cols< rows+1;cols=cols+1){

    //         cout << cols+1;

    //     }
    //     cout << endl;
    // }

    // //Inverted Half Number Pyramid
    // for(int rows=0; rows<N ; rows=rows+1){

    //     for(int cols=0; cols< N-rows-1;cols=cols+1){

    //         cout << cols+1;

    //     }
    //     cout << endl;
    // }

    // //Hollow Half Number Pyramid
    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols=0; cols< rows+1;cols=cols+1){

            if(cols==0 || rows==N-1 ){

                cout << cols+1;
            }else if(cols==rows+1-1){

                cout << cols;
            }else{

                cout <<" ";
            }
        }
        cout << endl;
    }


    return 0;
}