#include <iostream>

using namespace std;

int main(){


    //pattern trials

    int N=6;
    int rows;
    int cols;

    // Full Pyramid
    // for(int rows=0; rows<N ; rows=rows+1){

    //     for(int cols=0; cols<(N);cols=cols+1){

    //         if(cols < N-rows-1){
    //             cout << " " ;
    //         }
    //         else{
    //             cout << "* ";
    //         }

    //     }
    //     cout << endl;
    // }

    // Inverted Full Pyramid
    // for(int rows=0; rows<N ; rows=rows+1){

    //     for(int cols=0; cols<(N);cols=cols+1){

    //         if(cols <= rows){
    //             cout << " " ;
    //         }
    //         else{
    //             cout << "* ";
    //         }

    //     }
    //     cout << endl;
    // }

    //Hollow Full Pyramid
    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols=0; cols< (2 * N - 1);cols=cols+1){

            if(cols < N-rows-1){
                cout << " " ;
            }
            else if(cols == N-rows -1 || cols == N+rows-1 || rows==N-1){
                cout << "*";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }


    return 0;
}