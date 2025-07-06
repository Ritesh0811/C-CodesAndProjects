#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

bool checkSorted(int arr[], int size, int index){

    //base case
    if(index >= size){
        return true;
    }

    //processing
    if(arr[index]> arr[index-1]){
    //aage check karna padega
    //aab recursion sambhalega

    bool aageKaAns = checkSorted(arr, size, index+1);
    return aageKaAns;

    }else{

        //sorted nahi hai
        return false;
    }

}

int main(){

    int arr[] ={1,2,3,4,5,6};
    int size = 6;
    int index = 1; //kyu ki pehla element hum compare hi nai karte

    bool isSorted = checkSorted(arr,size,index);

    if(isSorted){
        cout << "Array is sorted" <<endl;
    }else{
        cout<<"Array is not sorted" <<endl;
    }

    return 0;
}