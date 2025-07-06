#include <iostream>
#include <vector>

using namespace std;


void solve(int arr[], int size){ // yaha actually pointer pass ho raha hai - and thats why its 8 bytes - hence int arr[] == int* arr

    cout << " Array size Inside Solve function- " << sizeof(arr) <<endl;

}


int main(){

    int arr[]={1,2,3,4,5}; // size == int has 4 bytes and total 5 integers then 4*5 ==20

    cout << " Array size Inside Main function- " << sizeof(arr) <<endl;

    solve(arr,5);

    return 0;
}
