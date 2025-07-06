#include <iostream>
using namespace std;

int main(){

    //print only square boundaries and make it hollow.

    int rows;
    int col;

    cout << "How many rows: " <<endl;
    cin >> rows;

    cout << "How many cols: " <<endl;
    cin >>col;

    for(int i=0; i<rows; i++){

        for(int j=0; j<col ; j++){

            if (i==0 || i==(rows-1) || j==0 || j==(col-1)){

                cout << "*";

            }else{

                cout <<" ";
            }
        }

        cout <<endl;
    }
    return 0;
}