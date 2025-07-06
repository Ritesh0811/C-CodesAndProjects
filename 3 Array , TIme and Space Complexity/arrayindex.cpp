#include <iostream>
using namespace std;


int main(){

    // int money[127];

    // int brr[5] = {3,6,8,0,1};

    // // cout << brr[1] <<endl;

    // int n=5;
    // for(int i=0; i<n;i++){
    //     cout << brr[i] <<endl;
    // }

    int arr[5];

    int m =5;

    //Taking input in array
    for(int i=0; i<m; i++){
        cout << "Enter the value for index : " <<i ;
        cin >> arr[i];

    }

    //Printing an array
    cout << "Array is: " << endl;

    for(int i=0; i<m;i++){

        cout << arr[i] ;
    }


    return 0;`
}
