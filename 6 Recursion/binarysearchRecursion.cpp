#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;


//binary search using recursion
int binarySearch(int arr[], int s, int e, int target){

    //base case
    if(s>e){
        //element not found
        return -1;
    }

    //processing
    int mid = s + (e-s)/2;

    if(arr[mid]==target){
        return mid;
    }

    //baki recursion dekhega
    if(arr[mid] < target){
        //right me jao
        return binarySearch(arr, mid+1, e, target);

    }else{
        //left me jao
        return binarySearch(arr, s, mid-1, target);

    }

}

int main(){

    int arr[] ={1,2,3,4,5,6};
    int size = 6;
    int start = 0;
    int end = size-1;

    int target = 10;

    int ans = binarySearch(arr, start, end, target);

    //cout << "Target found or not ? -> " << ans  <<endl;

    if(ans && ans != -1){
        cout<<"Element is present at index: "<<ans<<endl;
    }else{
        cout<<"Element is not present" <<endl;
    }


    return 0;
}