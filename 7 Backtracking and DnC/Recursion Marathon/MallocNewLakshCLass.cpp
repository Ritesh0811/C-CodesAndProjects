#include<iostream>
#include<vector>

using namespace std;


void print(int** v, int row, int col){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    //2D allocation
    int row=5, col=5;

    //har jaga we are storing 1D array which is referred by int*
    int** ptr2d = new int* [row];

    //now in each int* integer array, we are storing integer values of size col
    for(int i=0; i<row; i++){
        ptr2d[i] = new int[col];
    }

    //heap access using malloc -- ye purana way hai par interview me puchte hai
    int** ptr2dmalloc = (int **) malloc(sizeof(int*) *row);

    for(int i=0; i<row; i++){

        ptr2dmalloc[i]=(int*)malloc(sizeof(int) *col);
    }

    //lets now store some values
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            ptr2d[i][j]=7;
            ptr2dmalloc[i][j] = 8;
        }

    }

    print(ptr2d, row, col);
    print(ptr2dmalloc, row, col);

    for(int i=0; i<row; i++){
        delete[] ptr2d[i];
    }

    delete[] ptr2d;

    for(int i=0; i<row; i++){
        free(ptr2dmalloc[i]);
    }

    free(ptr2dmalloc);

    return 0;
}