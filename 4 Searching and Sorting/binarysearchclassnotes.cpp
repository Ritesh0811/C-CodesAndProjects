#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int target){

    int start = 0;
    int end = n-1;

    //mid
    int mid = (start+end)/2 ;

    //Above mid calculation might lead to interger overflow if both s and e are big numbers
    // hence use this -- int mid = start/2 + end/2

    while(start<=end){

        if(arr[mid]==target){

            return mid;

        }else if(target > arr[mid]){

            start = mid+1;

        }else if(target < arr[mid]){

            end= mid-1;
        }

        //mid update karna mat bhulna - kyuki start and end ki values change hue hai.
        mid = (start + end) /2;
    }

    //agar elemenet nai mila to -1 return karo
    return -1;

}

int findFirstOccurance(int arr[], int n, int target){

    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==target){

            ans = mid; // here we are not returning the index , instead saving to ans to check if there are any more occurances
            //to the left of already found, because array is sorted , hence first occurance left me rahega.
            e=mid-1;


        }else if(target>arr[mid]){

            s=mid+1;

        }else if(arr[mid]>target){

            e=mid-1;

        }

        mid = (s+e)/2;

    }

    return ans;

}

int findLastOccurance(int arr[], int n, int target){

    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==target){

            ans = mid; // here we are not returning the index , instead saving to ans to check if there are any more occurances
            //to the right of already found, because array is sorted , hence last occurance right me rahega.
            s=mid+1;


        }else if(target>arr[mid]){

            s=mid+1;

        }else if(arr[mid]>target){

            e=mid-1;

        }

        mid = (s+e)/2;

    }

    return ans;

}

int findTotalOccurance(int arr[], int n, int target){

    int firstOcc = findFirstOccurance(arr,n,target);
    int lastOcc = findLastOccurance(arr,n,target);

    int ans = lastOcc - firstOcc + 1 ; // Formula to be noted.

    return ans;

}

int main(){

    //int arr[]={10,20,30,40,50,60,70,80,90};

    int brr[]={10,20,30,30,30,30,40,50,60};
    int target = 30;
    int n=9;

    // int ansIndex = binarySearch(arr,n,target);

    // if(ansIndex==-1){

    //     cout << "Element not found in array !" << endl;

    // }else{

    //     cout << "Element found at index : " <<ansIndex << endl;

    // }

    int ansIndex = findFirstOccurance(brr,n,target);

    if(ansIndex==-1){

        cout << "Element not found in array !" << endl;

    }else{

        cout << "Element found at index : " <<ansIndex << endl;

    }



    return 0;
}