#include <iostream>

using namespace std;

int main(){
    //pattern trials

    int N=4;
    int rows;
    int cols;

    // Fancy Pattern - Numbers at odd and stars at even places

    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols = 0; cols < 2*rows+1; cols=cols+1){

            if(cols%2==0){

                cout << rows+1;

            }else{
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;

}