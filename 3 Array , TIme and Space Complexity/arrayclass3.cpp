#include <iostream>
#include <vector>
using namespace std;

//second method to print vector
void printarr2(vector<int>v){

    cout << "Vector elements are:" <<endl;

    for(auto it:v){

        cout << it << " " ;

    }
}


int main(){

    //how to copy vector
    vector<int>arr5={1,2,3,4,5};
    vector<int>arr6(arr5);

    cout << "First ELEment: " <<arr6[0] <<"Last Element: " << arr6[arr6.size() -1] <<endl;
    cout << "First ELEment: " <<arr6.front() <<"Last Element: " << arr6.back() <<endl; // Both are the ways to print first and last element.

    printarr2(arr5);

    return 0;
}