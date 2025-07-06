#include <iostream>
#include <queue>
#include <stack>

using namespace std;

//iterative approach == better than recursion
void reverseQueue(queue<int> &qu){

    stack<int> st;
    //queue se ele lo and stack me dalo
    while(!qu.empty()){

        int fronEle = qu.front();
        qu.pop();
        st.push(fronEle);

    }


    //one by one stack se lo and queue me dalo

    while(!st.empty()){

        int element = st.top();
        st.pop();
        qu.push(element);

    }


}


//reversion using recursion
 void reverse(queue<int> &qu){

    //base case
    if(qu.empty()){
        return ;

    }

    //1 step
    int ele = qu.front();
    qu.pop();
    //recursion
    reverse(qu);

    //backtracking
    qu.push(ele);

 }


int main(){

    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);

    // while(!qu.empty()){
    //     int element =  qu.front();
    //     qu.pop();
    //     cout << element << "";

    // }

    reverseQueue(qu);

    //cout << "Printing Queue: -" <<endl;

    while(!qu.empty()){
        int element =  qu.front();
        qu.pop();
        cout << element << " ";

    }

    return 0;
}