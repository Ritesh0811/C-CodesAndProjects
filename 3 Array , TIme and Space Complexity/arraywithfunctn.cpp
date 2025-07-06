#include <iostream>
using namespace std;


void Functn(int arr[],int size){


    cout << "You are inside the array!" << endl;

    for(int i=0; i<size; i++){

        cout << arr[i] ;
    }
    cout << endl;

}


//check with linear search if particular element is present or not
// present -- true
//absent -- false
bool linearSearch(int arr[], int size, int target){

    for(int i=0; i<size;i++){

        if(arr[i]==target){

            return true;
        }
    }
    //not found
    return false;

}


int main(){


    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int target = 4;

    Functn(arr,size);
    bool flag=linearSearch(arr,size,target);

    if(flag==true){
        cout <<"element found";
    }

    return 0;
}