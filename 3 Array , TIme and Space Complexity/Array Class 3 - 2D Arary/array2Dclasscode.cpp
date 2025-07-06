//2D arrays

#include <iostream>
#include <vector>

using namespace std;


void printarr(int arr[][4],int row, int col){

    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){

            cout << arr[i][j] << " " ;

        }
        cout << endl;
    }
}

//linear search in an array
// bool findTarget(int arr[][4],int row, int col, int target){

//     for(int i=0; i<row; i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target){

//                 return true;
//             }
//         }
//     }
//     return false;
// }

//find transpose of array

void transpose(int arr[3][4],int row, int col){

    for(int i=0; i<row;i++){

        for(int j=i; j<col; j++){

            swap(arr[i][j],arr[j][i]);
        }
    }

}

int main(){


    //create 2D array
    // int arr[3][3];

    //initialize
    // int arr[3][3] = {

    //     {1,2,3},
    //     {4,5,6},
    //     {5,5,5}
    // };

    // int arr[][3] = {

    //     {1,2,3},
    //     {4,5,6},
    //     {5,5,5}
    // };

    //We can not initialize 2D array without telling column size - int arr[3][] -- this wont work

    // int row=3;
    // int col=3;
    // printarr(arr,row,col);


    //Taking input from user to create 2D array

    // int brr[3][3];

    // int row1 = 3;
    // int col1 = 3;

    // for(int i=0; i<row1; i++){
    //     for(int j=0; j<col1; j++){

    //         cout <<"Enter inp for row index " << i << "Colm index " << j;
    //         cin >> brr[i][j];
    //     }

    // }

    //Finding target from 2D array

    // int crr[3][4] = {

    //     {1,2,3,5},
    //     {4,5,6,11},
    //     {5,5,5,99}
    // };

    // int row2=3;
    // int col2 =4;

    // int target = 11;

    // cout<< "Tarhet Found or not? " <<findTarget(crr,row2,col2,target);

    int crr[4][4] = {

        {1,2,3,5},
        {4,5,6,11},
        {5,5,5,99},
        {5,5,5,99}
    };

    int row2=4;
    int col2 =4;

    //print before transpose
    printarr(crr,row2,col2);
    //transpose the arrary
    transpose(crr,row2, col2);

    //after transpose
    printarr(crr,row2,col2);

    return 0;
}


//hw - find max and min number in 2D array
// int maxAns = INT_MIN;


//print row wise and col wise sum in 2D array