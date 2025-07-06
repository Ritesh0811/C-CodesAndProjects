#include <iostream>
#include <limits.h>


//utility functions -- min(a,b) ; max(a,b) ; swap(a,b)

using namespace std;

//count zero and ones in array
// void Count(int arr[],int size){

//     cout << "You are inside the array!" << endl;
//     int zero =0;
//     int one = 0;

//     for(int i=0;i<size;i++){

//         if(arr[i]==0){
//             zero++;
//         }else if(arr[i]==1){
//             one++;}
//     }
//     cout << one << endl <<zero << endl ;

// }


//count minimum number in an array
void minno(int arr[], int size){

    int minAns = INT_MAX;
    //int mazAns = INT_MIN;
    for(int i=0; i<size;i++){

        if(arr[i]<minAns){

            minAns = arr[i];

        }

        //or minAns = min(arr[i],minAns)
     }
    cout << "Minimum number is: " <<minAns  <<endl;
}

//reverse an array
void reverse(int arr[], int size){

    int left =0;
    int right =size-1;
    int i =0;

    //swap
    while(left<=right){

        swap(arr[left],arr[right]);
        left ++;
        right --;

    }

    // print the array
    for(int i=0; i<size; i++){

        cout << arr[i] << " " ;

    }
    cout << endl;

}

int main(){

    int arr[6] = {11,2,4,9,7,22};
    int brr[5] = {10,20,40,90,70};
    int size = 6;
    int bize = 5;

    //Count(arr,size);
    minno(arr,size);
    reverse(arr,size);
    reverse(brr,bize);

    cout << INT_MIN << endl; // - 2 to the power 31
    cout << INT_MAX; // 2 to the power 31 minus 1

    return 0;
}