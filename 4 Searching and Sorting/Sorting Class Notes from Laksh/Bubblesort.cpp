#include <iostream>
using namespace std;
#include <vector>

void print(vector<int> &v){

    for(int i=0; i<v.size();i++){

        cout << v[i] << " " ;
        //cout << endl;

    }
}

void bubbleSort(vector<int> &v){

    int n=v.size();

    for(int i=0;i<n-1;i++){//outer iterations 0 to n-1 times
        for(int j=0;j<n-i-1;j++){ //inner one 0 to n-i-1 times
            if(v[j]>v[j+1]){ // change this to v[j]<v[j+1] for decreasing order sort
                swap(v[j],v[j+1]);
            }
        }
    }

}

int main(){

    vector<int> v={5,2,3,4,1};

    bubbleSort(v);
    print(v);


    return 0;
}