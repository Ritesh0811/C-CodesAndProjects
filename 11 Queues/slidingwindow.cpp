#include <iostream>
#include <deque>
#include <stack>

using namespace std;

void printFirstNegative(int *arr, int n, int k){

    deque<int> dq;

    //process first k elements - first window
    for (int i = 0; i <k ; i++) {

        int ele = arr[i];
        if(ele < 0){ //agar element -ve mila to uska index deque me store karo
            dq.push_back(i);
        }
    }

    //process remaining windows - removal of old ele and addtn of new ele
    for(int i=k; i<n; i++){

        //pehle purani window ka chek karlo
        if (dq.empty()) {
            cout << "0" << " ";
        }

        //removal of old indexes from dq if those are not part of current window
        if(i-dq.front() >=k ){ //aata index k ni pudhe aahe so index - stored index from last window k peksha motha asel tr kadha
            dq.pop_front();
        }

        //addn of new indexes if ele is negative in cuurent window
        if(arr[i] < 0){
            dq.push_back(i);
        }


        //last window ka answer print kardo
        if(dq.empty()){
            cout << "0" <<endl;
        }
        else{
            cout << arr[dq.front()] << " ";

        }

    }

}


int main(){

    int arr[] = {2,0,4,-1,-2,0,5};
    int size = 7;
    int k = 3;

    printFirstNegative(arr, size, k);
    return 0;
}


//GFG Question -
//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?page=1&category%5B%5D=Queue&sortBy=submissions