#include <iostream>
#include <vector>

using namespace std;


//time complexity -- log(n) -- O(log(2^log n/2))

//application -- better than binary search when x is near beginnning

// Search in infinite array[unbounded sorted array] - application


int bs(int a[], int start, int end, int x){


    while(start <= end){

        int mid= (start+end)/2 ;

        if(a[mid==x]){
            return mid;
        }else if(a[mid]<x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

    return -1;

}


int expSearch(int a[], int n, int x){


    if(a[0]==x){
        return 0;
    }

    int i=1;

    while(i<n && a[i]<=x){//tabtak search karo jabtak n se less ho ya value x se badha na ho

        i=i*2; // searching exponentially multiply by 2-
        //i=i<<1 // ye bhi left shift matlab muliply by 2 hota

    }

    return bs(a,i/2,min(i,n-1),x); //apply binary search on a array from i/2 to i provided i less than n-1.

}

int main(){

    int a[]={3,4,5,6,11,13,15,56,70};

    int n= sizeof(a)/sizeof(int);

    int x=13; //search this in array using exponential search

    int ans=expSearch(a,n,x);

    cout <<"The search element is at index " <<ans <<" " << endl;

    return 0;
}