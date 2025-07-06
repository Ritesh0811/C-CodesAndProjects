#include <iostream>
using namespace std;

//Solved on leetcode - https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/

int peakIndexInMountainArray(vector<int>& arr) {

    //Step 1
    // arr[i] < arr[i+1] - smaller to peak point

    //Step 2
    // arr[i] > arr[i+1] - peak point to smaller

    //step 3 - peak point
    // arr[i-1] < a[i] > arr[i+1]


    // step 2 and step 3 can be clubbed.

    int n = arr.size();
    int s =0;
    int e=n-1;

    int mid = s/2 + e/2;

    //here make sure that we are using s<e and not s<=e - warna infinite loop me jaoge
    // bcox we are using e = mid; instead of mid-1 in later code.
    while(s<e){

        if(arr[mid]< arr[mid+1]){

            //A wali line me hu - step 1
            // peak right me hoga

            s= mid+1;

        }else{

            // ya to B line pe ho ya khud peak ho
            // step 2 and 3 - B line or Peak

            e = mid;

        }

        mid = s/2+e/2;

    }

    return s; // why return s and not mid --  index of peak element - it can be s or e or anyhing .

}

//Array sorted hai
//O(n) se kam complexity me solve karna hai -- log(n)
//Search karna hai
// That means binary search lagega

int main(){

    int arr[]={1,2,3,4,6,7,8,9};

    int n=8;


    cout << "Peak Number is: " << findPeakElementinMountainArray(arr,n) << endl;

    return 0;
}