#include<iostream>
#include<stack>

using namespace std;

// add element in sorted stack
// sort the stack

void insertinsorted(stack<int> &st, int ele){

    //base case - yaha galati ho sakta hai take care ki st.empty() wala dyan rakhna
    if(st.empty() || ele > st.top()){
        st.push(ele);
        return;
    }

    //1 case solve karo
    int temp = st.top();
    st.pop();

    //recursion dekhega
    insertinsorted(st, ele);

    //back-tracking
    st.push(temp);

}


int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int ele = 55;
    insertinsorted(st, ele);

    //print stack
    while(! st.empty()){

        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}