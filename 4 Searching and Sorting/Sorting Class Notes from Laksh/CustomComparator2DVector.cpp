#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<vector<int>> &v){ // printing 2D vector elements

    for(int i=0; i<v.size();i++){

        vector<int> &temp=v[i];

        int a= temp[0];
        int b= temp[1];

        cout << a << " " << b << endl;

    }
    cout << endl;
}

bool mycomp(vector<int> &a, vector<int> &b){

    //return a[0]<b[0]; // for 0th index sorting
    return a[1]<b[1]; // for 1st index sorting increasing order
    //return a[1]>b[1]; // for 1st index sorting decreasing order

}

int main(){

    vector<vector<int>> v;
    int n=5;

    for(int i=0;i<n;i++){
        int a,b;
        cout << "Enter a and b values" << endl;
        cin >>a >> b;

        vector<int> temp;

        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);

    }

   // print(v);

    // sorted by 0th index
    //sort(v.begin(),v.end()); // increasing order sorting

    print(v);

    // sorted by 1th index
    sort(v.begin(),v.end(),mycomp); // increasing order sorting

    print(v);

    return 0;
}