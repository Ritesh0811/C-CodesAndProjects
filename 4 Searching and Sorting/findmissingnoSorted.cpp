#include <iostream>
using namespace std;

int findMissingNo(int arr[],int n){

    int start = 0;
    int end = n-1;

    int ans=-1;
    //mid
    int mid = (start+end)/2 ;

    //Above mid calculation might lead to interger overflow if both s and e are big numbers
    // hence use this -- int mid = start/2 + end/2

    while(start<=end){

        int diff = arr[mid] - mid;

        if(diff==1){

            //right me jao
            start = mid+1;
        }else{

            //ans store karo
            ans = mid;

            //left me jao
            end = mid -1;
        }

        //mid update karna mat bhulna - kyuki start and end ki values change hue hai.
        mid = (start + end) /2;
    }

    //agar elemenet nai mila to -1 return karo
    return ans+1;

}

//Array sorted hai
//O(n) se kam complexity me solve karna hai -- log(n)
//Search karna hai
// That means binary search lagega

int main(){

    int arr[]={1,2,3,4,6,7,8,9};

    int n=8;


    cout << "missing number is: " << findMissingNo(arr,n) << endl;

    return 0;
}