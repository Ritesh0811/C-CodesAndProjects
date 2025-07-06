#include <iostream>
using namespace std;

int main(){


    // //pyramid - full with spaces

    // int rows;
    // int col;
    // int N=5;

    // for(int rows=0; rows<N; rows=rows+1){

    //     //print spaces
    //     for(int col=0; col<N-rows-1; col=col+1){
    //         cout<< " ";
    //     }

    //     //print stars + Spaces
    //     for(int col=0; col<rows+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // //Inverted pyramid - full with spaces

    // int rows;
    // int col;
    // int N=5;

    // for(int rows=0; rows<N; rows=rows+1){

    //     //print spaces
    //     for(int col=0; col<rows; col=col+1){
    //         cout<< " ";
    //     }

    //     //print star
    //     for(int col=0; col<N-rows; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // //Diamond Pattern - Combine upper two patterns

    // int rows;
    // int col;
    // int N=6;

    // for(int rows=0; rows<N; rows=rows+1){

    //     //print spaces
    //     for(int col=0; col<N-rows-1; col=col+1){
    //         cout<< " ";
    //     }

    //     //print stars + Spaces
    //     for(int col=0; col<rows+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int rows=0; rows<N; rows=rows+1){

    //     //print spaces
    //     for(int col=0; col<rows; col=col+1){
    //         cout<< " ";
    //     }

    //     //print star
    //     for(int col=0; col<N-rows; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Diamond Pattern - Combine upper two patterns

    int rows;
    int col;
    int N=6;

    for(int rows=0; rows<N; rows=rows+1){

        //print spaces
        for(int col=0; col<N-rows-1; col=col+1){
            cout<< " ";
        }

        //print stars + Spaces
        for(int col=0; col<rows+1; col=col+1){
            //cout << "* ";

            if(col==0 || col==rows+1-1){

                //star and space
                cout <<"* ";
            }
            else{
                //2 spaces
                cout <<"  ";
            }

        }
        cout << endl;
    }

    return 0;
}


