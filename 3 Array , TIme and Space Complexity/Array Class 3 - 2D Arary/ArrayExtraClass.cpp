#include <iostream>
#include <vector>

using namespace std;


void ShiftNegativetoLeft(int arr[], int size){

    int index; // to traverse entire array
    int j=0; //memory block where we can store -ve numbers
    for(int index=0;index<size; index++){

        if(arr[index]<0){

            swap(arr[index], arr[j]);
            j++;

        }
        cout <<endl;
    }
}

int main(){


    //Array has both +ve and -ve numbers, sort them as first -ves and then +ves - Use 2D Pointer approach [Swapping]

    int arr[] = {1,-4,22,33,-11,44,-1,-9};

    int n=8;

    ShiftNegativetoLeft(arr,n);

    //print array
    for(int i=0; i<n; i++){

        cout << arr[i] <<" ";

    }


    return 0;
}