#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=5;
    int rows;
    int cols;

    // Numeric Hollow Inverted half pyramid

    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols = 0; cols < N-rows; cols=cols+1){

            if(cols==0){

                    cout << rows+1;

            }else if(rows==0){

                cout << cols+1;

            }else if(cols==N-rows-1){

                cout << N;

            }else{
                cout << " ";
            }

        }

        cout << endl;
    }


    return 0;

}