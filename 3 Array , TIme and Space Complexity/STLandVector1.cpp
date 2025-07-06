#include <iostream>
using namespace std;

void printarr(int arr[],int size){

    cout << "Array elements are:" <<endl;

    for(int i=0; i<size; i++){

        cout << arr[i] << " " ;

    }

}

int main(){

    int n;
    cin >> n;

    int *arr= new int[n]; // it creates array of user inputes size n with garbage values

    //to get the values inside the array from user - n elements

    for(int i=0; i<n ;i++){

        int data1;
        cout << "Enter Array Values:";
        cin >> data1;
        arr[i]=data1;

    }

    printarr(arr,n);

    return 0;
}