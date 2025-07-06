#include <iostream>
using namespace std;

int main(){


    int row1;

    cout << "Enter the max rows: " <<endl;
    cin >> row1;

    for(int i=0; i<row1; i++){
        for(int j=0; j<row1; j++){
            if(i==0 || j==0 || j == row1-i-1){

                cout << "*";

            }else{

                cout << " ";

            }
        }
        cout << endl;
    }

    return 0;

}
