#include <iostream>
#include <queue>
#include <stack>

using namespace std;

//iterative approach == better than recursion

// time complexity - O(n) -- linear time complexity

/*
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
*/

void interLeaveQueue(queue<int> &first){

    queue<int> second;

    //push first half of first queue to second queue
    int size = first.size();

    for(int i=0; i<size/2 ; i++){ //half eles
        int temp = first.front();
        first.pop();

        second.push(temp);

    }

    //Merge both the halfs -- with InterLeave eles -- into the original queue - named as first
    for(int i=0; i <size/2; i++){

        int temp = second.front();
        second.pop();

        first.push(temp);
        temp = first.front();
        first.pop();

        first.push(temp);
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

    //reverseKEleQueue(qu, 4);
    interLeaveQueue(qu);

    //cout << "Printing Queue: -" <<endl;

    while(!qu.empty()){
        int element =  qu.front();
        qu.pop();
        cout << element << " ";

    }

    return 0;
}



