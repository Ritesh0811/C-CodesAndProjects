#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout << v[i] << " ";
    }

    cout << endl;

}


void InsertionSort(vector<int> &v){
    int n=v.size();
    //0th element chod dete hai
    for(int i=1;i<n ;i++){//56[2nd ele] se start karenge compare
        int key = v[i];
        int j=i-1;

        //move elems of array [0 to i-1] that are greater than
        //key to one position ahead of their current position - shifting ahead

        while(j>=0 && v[j]>key ){
            v[j+1]=v[j];
            j--; // most important step
        }
        v[j+1]= key; // this is INSERTION
    }

}

int main(){

    vector<int> v={4,56,6,33,5,55};

    //before insertion sort
    print(v);

    InsertionSort(v);

    //after insertion sort
    print(v);

    return 0;
}