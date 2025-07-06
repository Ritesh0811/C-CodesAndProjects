#include <iostream>

using namespace std;

int main(){

    // //print solid square patterns -- *

    // int row1;
    // int col;

    // cout << "How many rows? " <<endl;
    // cin >> row1;

    // cout << "How many columns? " <<endl;
    // cin >> col;


    // //outer loop is for rows and inner for columns

    // for(int i=0; i<row1; i++){

    //     for(int j=0; j<col; j++){

    //         cout << "*";
    //     }

    //     cout << endl;

    // }

    //Infinite loop
    // int a=0;
    // for(; ;){

    //     a=a+1;

    //     if(a>3){
    //         break;
    //     }
    //     cout << "Loop Ended" <<endl;
    // }


    // //print the filled traingle pattern

    // int rows;
    // int col;

    // int N=6;


    // for(int rows=0; rows<N; rows=rows+1){

    //     int k=0;

    //     for(int col=0; col<((2*N)-1);col=col+1){


    //         if(col<N-rows-1){

    //             cout << " ";

    //         }else if(k<2*rows+1){

    //             cout << "*";
    //             k = k+1;

    //         }else{

    //             cout <<" ";

    //         }
    //     }

    //     cout << endl;

    // }


    //print the hollow traingle pattern

    int rows;
    int col;

    int N=6;

    for(int rows=0; rows<N; rows=rows+1){

        int k=0;

        for(int col=0; col<((2*N)-1);col=col+1){

            if(col<N-rows-1){

                cout << " ";

            }else if(k<2*rows+1){

                if(k==0 || k==2*rows || rows==N-1){

                    cout << "*";
                }else{

                    cout << " ";
                }
                k = k+1;
            }else{
                cout <<" ";

            }
        }
        cout << endl;
    }

    return 0;
}