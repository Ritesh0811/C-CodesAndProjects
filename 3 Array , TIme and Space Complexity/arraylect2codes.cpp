#include <iostream>
#include <limits.h>

using namespace std;

//find unique elements -- Use XOR operation
void unique(int arr[], int size){

    int ans=0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }

    cout << ans <<endl;

}

// print all pairs
void Pair(int brr[], int mize){

    for(int i=0; i<mize; i++){

        for(int j=0; j<mize;j++){
            cout << brr[i] << brr[j] << endl;
        }

    }

}

// Different approaches - Counting 0's and print , 2 point approach[increase and decrease i,js], use sort function - incremently.

//we are solving by counting 0's and 1's
void Sort(int arr[], int size){

    int zero=0;
    int one=0;

    //STEP1 : Count 0 and 1
    for(int i=0; i<size; i++){

        if(arr[i]==0){
            zero++;
        }

        if(arr[i]==1){
            one++;
        }
    }

    //Step 2 : Place all 0s and first and then 1s next
    int i; // just to access the i outside the for loop
    for(i=0; i< zero; i++){

        arr[i]=0;

    }
    for(int j=i; j<size;j++){

        arr[j]=1;
    }

    //Another way
    // int index=0;

    // while(zero--){
    //     arr[index]=0;
    //     index++;
    // }

    // while(one--){
    //     arr[index]=1;
    //     index++;
    // }

}


void ShiftArryEleby1(int arr[], int size){

    //step1 - store last element
    int temp = arr[size-1];

    //step2 - shift  arr[i]=arr[i-1]
    for(int i=size-1; i>0;i--){

        arr[i] = arr[i-1];
    }

    //copy last into 0th
    arr[0] = temp;
}


int main(){

    int arr[7] = {10,2,14,23,73,29,22};
    int crr[7] = {0,1,0,1,0,1,0};

    int brr[3]={10,20,30};
    int mize = 3;

    int size = 7;


    //unique(arr,size);
    //Pair(brr,mize);
    // Sort(crr,size);

    // //print array after sort
    // for(int i=0; i<size;i++){

    //     cout << crr[i] ;

    // }

    ShiftArryEleby1(arr,size);

    for(int i=0; i<size;i++){

        cout << arr[i] <<" " ;

    }


//Hw - shift left by 1 is homework


    return 0;
}