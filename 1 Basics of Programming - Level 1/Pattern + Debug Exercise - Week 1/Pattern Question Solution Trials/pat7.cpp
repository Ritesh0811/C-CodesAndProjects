#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=6;
    int rows;
    int cols;

    //Combine Halo Pyramid and Inverted Pyramid - Becomes Dimond Shape

    // // //Holo Pyramid
    for(int rows=0; rows<N ; rows=rows+1){

        for (int spaces = 0; spaces < N - rows - 1; spaces=spaces+1) {
            cout << " ";
        }

        for(int cols=0; cols <rows+1 ; cols=cols+1){

            if(cols==0 || cols == rows+1-1){

                cout << "* ";
            }else{
                cout << " ";
            }

        }
        cout << endl;
    }

    // //Inverted Holo Pyramid
    for(int rows=0; rows<N ; rows=rows+1){

        for (int cols = 0; cols < rows; cols=cols+1) {
            cout << " ";
        }

        for(int cols=0; cols <(2*N - 2*rows -1) ; cols=cols+1){

            if(cols==0 || cols == (2*N - 2*rows-2)){

                cout << "* ";
            }else{
                cout << " ";
            }

        }

        cout << endl;
    }


    return 0;

}