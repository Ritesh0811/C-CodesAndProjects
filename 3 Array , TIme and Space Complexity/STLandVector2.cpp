#include <iostream>
#include <vector>
using namespace std;

void printarr(vector<int>v,int size){

    cout << "Vector elements are:" <<endl;

    for(int i=0; i<size; i++){

        cout << v[i] << " " ;

        //v[i] == v.at(i) both are same.

    }

}

int main(){

    //STEP 1 ----------------------------------<<
    //No need of telling size in vectors
    //vector<int>v; //array hi hai

    //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // int size = v.size();

    // int n;
    // cin >> n;

    // int *arr= new int[n]; // it creates array of user inputes size n with garbage values


    // Step 2 -- Creating vector by dynamically taking inputs :

    vector<int>v; // default tarika to initialize[with no data and 0 size]

    int ipsize;

    cin >> ipsize;

    for(int i=0; i<ipsize;i++){

        int data;

        cin >> data;
        v.push_back(data);

    }

    printarr(v,ipsize);

    //to clear data of vector
    v.clear(); // previouus elements are cleard and it will start uploading from index 0

    // Dynamically adding more values in vector irrespective of size given by user
    for(int i=0; i<10;i++){

        v.push_back(100);

        //to remove -- v.pop_back();
    }

    int ipsize1 = v.size();

    printarr(v,ipsize1);




    return 0;
}