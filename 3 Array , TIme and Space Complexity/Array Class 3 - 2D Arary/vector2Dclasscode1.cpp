#include <iostream>
#include <vector>

using namespace std;

int main(){

    // int arr[5]; // 1D array
    // vector<int>v(5); // 1D vector


    //***********vector - 1D *************
    // cout << "Print Vector: " << endl;
    // for(int i=0; i< v.size();i++){

    //     cout << v[i] << " " ;

    // }
    // cout << endl;


    //************2D vector****************
    vector< vector<int> > arr(5, vector<int>(10,0));

    //print 2D vector

    //arr.size() -- total rows that is total vector size
    //arr[i].size -- total cols as it will tell what are elements in that particular row.
    for(int i=0; i< arr.size(); i++){

        for(int j=0; j<arr[i].size();j++){

            cout << arr[i][j] << " " ;

        }
        cout << endl;
    }

    return 0;
}

