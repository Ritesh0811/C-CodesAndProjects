#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

void printArray(int arr[],int size, int index){//instead of int arr[] - you can use pointers also - int *arr

    //base case
    if(index >=size){
        return;
    }

    //processing
    cout << arr[index] << " "; //agar ye print statement recursive call k bad kare to reverse order me print hoga.

    //recursive call
    printArray(arr, size, index+1);

}

bool searchArray(int arr[], int size, int target, int index){

    //base case
    if(index >= size){
        return false;
    }

    if(arr[index]==target){
        return true;
    }

    //processing

    //recursive call
    //bool ans1 = searchArray(arr, size, target, index+1);

    bool agekaans =  searchArray(arr, size, target, index+1);

    return agekaans;

}

void findMin(int arr[], int size, int index, int &mini){

    //Base Condition
    if(index >=size){
        return ;
    }

    //processing
    mini = min(mini, arr[index]);

    //recursive
    findMin(arr, size, index+1, mini);

    //return mini; its void function hence return not req as passing mini by reference
}

//search even numbers in array and store them in vector.
void solve(int arr[], int size, int index, vector<int> &ans){//passing vector by reference to store the value inside orignal vector

    //base condition
    if(index >=size){
        return;
    }

    //processing
    if(arr[index]%2 ==0){
        //even
        ans.push_back(arr[index]);
    }

    //recursive call
    solve(arr, size, index+1, ans);

}


int main(){

    int arr[] = {10,20,2,3,4,5};
    int size = 6;
    int index = 0;
    vector<int> ans;

    solve(arr,size,index,ans);

    for(auto i:ans){
        cout << i << " " ;
    }
    cout<<endl;

    printArray(arr,size,index);

    int target = 4;

    //bool op = searchArray(arr, size, index, target);

    cout << "Target found or not ?-->" <<" " <<searchArray(arr, size, target, index)  << endl;

    int mini = INT_MAX;
    findMin(arr,size, index, mini);

    //int out = findMin(arr,size, index, mini);
    cout << "Minimum value in array is- >" <<mini  << endl;

    return 0;
}