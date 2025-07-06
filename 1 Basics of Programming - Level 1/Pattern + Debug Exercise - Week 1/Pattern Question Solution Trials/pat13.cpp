#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=5;
    int rows;
    int cols;

    // Numeric palindrome equilateral Pyrimid

    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols = 0; cols < N-rows; cols=cols+1){

            cout <<" ";

        }

        // for(int cols = 0; cols < 2*rows+1; cols=cols+1){

        //     if(cols==0 || cols== 2*rows){
        //         cout << 1;
        //     }else if(rows==N-1 || cols!=0 ){
        //         cout << cols << " ";
        //     }

        // }

        for(int cols = 0; cols < rows+1; cols=cols+1){

            //cout <<"*" ;

            if(cols==0){

                cout <<1;

            }else if(rows==N-1){

                cout << cols+1;

            }else if(cols==rows){

                cout << rows+1;

            }else{

                cout << cols+1;
            }

        }

        for(int cols = 0; cols < rows; cols=cols+1){

            cout <<"*";

        }

        cout << endl;
    }


    return 0;

}