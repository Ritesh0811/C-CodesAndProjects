#include <iostream>

using namespace std;


void fuct(int arr[], int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){

                cout << arr[k] <<" ";
            }

            cout << endl;
        }
    }
}


int main(){

    // int n=6;

    // int arr[6]={1,2,3,4,5,6};

    // for(int i=0;i<n;i=i+2){
    //     int j=i+1;

    //     if(j<n){
    //         swap(arr[i],arr[j]);
    //     }
    // }

    // for(int i=0; i<n ;i++){

    //     cout << arr[i] <<" ";
    // }

    int arr[]={1,2,3,4,5};

    int n= sizeof(arr);

    fuct(arr,n);


    // cout << arr << " " <<&arr[0] << endl;

    return 0;
}