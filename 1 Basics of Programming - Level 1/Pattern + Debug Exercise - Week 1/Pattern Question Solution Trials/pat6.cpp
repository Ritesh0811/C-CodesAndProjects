#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=6;
    int rows;
    int cols;

    // //DIamond Full Pyramid
    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols=0; cols<N-rows-1 ;cols=cols+1){

            cout << " ";
        }

        for(int cols=0; cols <rows+1 ; cols=cols+1){

            cout << "* ";
        }

        cout << endl;
    }

    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols=0; cols<rows;cols=cols+1){

            cout << " ";
        }

        for(int cols=0; cols< N-rows ; cols=cols+1){

            cout << "* " ;
        }

        cout << endl;
    }

    return 0;
}