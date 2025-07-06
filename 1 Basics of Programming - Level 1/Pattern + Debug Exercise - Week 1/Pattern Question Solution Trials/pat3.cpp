#include <iostream>

using namespace std;

int main(){


    //pattern trials

    int N=6;
    int rows;
    int cols;

    for(int rows=0; rows<N ; rows=rows+1){

        for(int cols=0; cols<(N-rows);cols=cols+1){

            if(rows ==0 || cols==0 || cols==N-rows-1){
                cout << "*" ;
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }

    return 0;
}