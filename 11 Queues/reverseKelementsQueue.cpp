#include <iostream>
#include <queue>
#include <stack>

using namespace std;

//iterative approach == better than recursion

// time complexity - O(n) -- linear time complexity

void reverseKEleQueue(queue<int> &qu, int k){

    stack <int> st;
    int n= qu.size();

    if(k>n || k==0){
        return;
    }

    //push first k elements into the stack
    for(int i=0; i<k; i++){
        int temp = qu.front();
        qu.pop();
        st.push(temp);
    }

    //push k elements from stack to queue
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        qu.push(temp);
    }

    //pop and push first [n-k] elements into queue again from queue
    for(int i=0; i<n-k; i++){

        int temp = qu.front();
        qu.pop();
        qu.push(temp); //samorun nighun mage lagel

    }

}

int main(){

    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);

    reverseKEleQueue(qu, 4);

    //cout << "Printing Queue: -" <<endl;

    while(!qu.empty()){
        int element =  qu.front();
        qu.pop();
        cout << element << " ";

    }

    return 0;
}