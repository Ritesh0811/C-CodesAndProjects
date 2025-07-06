#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout << v[i] << " ";
    }

    cout << endl;

}

void SelectionSort(vector<int> &v){

    int n=v.size();

    for(int i=0; i<n-1;i++){
        int min_index=i; // ith ele is smallest ele - lets consider

        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){ // for decreasing order use v[j]>v[min_index]
                min_index =j;
            }
        }
        //swap ith index with minindex
        swap(v[i],v[min_index]);

    }

}


int main(){

    vector<int> v={4,5,6,2,1,3};

    //print vector before sort
    print(v);

    SelectionSort(v);

    //print vector after sort
    print(v);

    return 0;
}