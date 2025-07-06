#include <iostream>
using namespace std;


// all elements occur even number of times except one - can be solved by XOR operation but time complexity will be O(n)
// all repeating nos pair and pair are not consecutive.
// ek bar me koi b number do se jada bar nai aa sakta

// find element which is coming oddd number of times.

//array is not sorted

int findoddoccuringevent(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        //single ele
        if(s==e){
            return s;
        }

        //mid check -- even or odd
        if(mid & 1){// mid&1 -- true -- odd number

            if(mid-1 >=0 && arr[mid-1]==arr[mid]){
                //right jao
                s=mid+1;
            }else{
                //left me jao
                e=mid-1;

            }


        }else{
            //even
            if(mid+1 < n && arr[mid]==arr[mid+1]){
                //right me jao
                s=mid+2;
            }else{

                //either mai right me hu ya answe pe hu - islia e=mid
                e=mid; //e=mid-1 se answer lost ho sakta
            }

        }

        mid = s+(e-s)/2;
    }
    return -1;

}

int main(){

    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n = 13;

    int ansindex = findoddoccuringevent(arr,n);

    cout << "Index of non repeating odd element is: " <<ansindex;


    return 0;

}