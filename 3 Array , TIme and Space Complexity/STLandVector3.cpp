#include <iostream>
#include <vector>
using namespace std;

void printarr(vector<int>v){

    int size = v.size();
    cout << "Vector elements are:" <<endl;

    for(int i=0; i<size; i++){

        cout << v[i] << " " ;

        //v[i] == v.at(i) both are same.
    }
}

//second method to print vector
void printarr2(vector<int>v){

    cout << "Vector elements are:" <<endl;

    //
    for(auto it:v){

        cout << it << " " ;

        //v[i] == v.at(i) both are same.
    }
}


int main(){

    // size and input both
    vector<int>arr;
    vector<int>arr2(5,-1); // here 5 is size and -1 is value - we can add more elements also irrespective of size

    vector<int>arr3={1,2,3,4,5};

    arr3.push_back(10);
    arr3.pop_back();

    printarr(arr);
    printarr(arr2);
    printarr(arr3);

    //how to copy vector
    vector<int>arr5={1,2,3,4,5};
    vector<int>arr6(arr5);

    printarr(arr6);

    //print first and last element

    cout << "First ELEment: " <<arr6[0] <<"Last Element: " << arr6[arr6.size() -1] <<endl;
    cout << "First ELEment: " <<arr6.front() <<"Last Element: " << arr6.back() <<endl; // Both are the ways to print first and last element.

    printarr2(arr5);

    return 0;
}