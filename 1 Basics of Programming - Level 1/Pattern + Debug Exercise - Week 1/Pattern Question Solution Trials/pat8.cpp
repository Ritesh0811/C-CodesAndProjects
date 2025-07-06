#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=4;
    int rows;
    int cols;

    // Dashes + Stars Pattern - Flipped Solid Diamond

    for(int rows=0; rows<N ; rows=rows+1){

        //Inverted Star half pyramid 1
        for(int cols = 0; cols < N - rows; cols=cols+1){
            cout << "*";
        }

        // Full star pyramid
        for(int cols = 0; cols < 2*rows + 1; cols=cols+1){
            cout << "-";
        }

        // Inverted star half pyramid 2
        for(int cols = 0; cols < N - rows; cols=cols+1){
            cout << "*";
        }

        cout << endl;
    }

    for(int rows=0; rows<N ; rows=rows+1){

        //Inverted Star half pyramid 1
        for(int cols = 0; cols < rows+1; cols=cols+1){
            cout << "*";
        }

        // Full star pyramid
        for(int cols = 0; cols < 2*N-2*rows - 1; cols=cols+1){
            cout << "-";
        }

        // Inverted star half pyramid 2
        for(int cols = 0; cols < rows+1; cols=cols+1){
            cout << "*";
        }

        cout << endl;
    }


    return 0;

}