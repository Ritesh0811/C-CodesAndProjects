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

//sort a stack
void sortstack(stack<int> &st){

    //base case
    if(st.empty()){
        return;
    }

    //1 case solve kare
    int temp = st.top();
    st.pop();

    //recursion
    sortstack(st);

    //backtracking
    insertinsorted(st, temp);

}

int main(){

    stack<int>st;
    st.push(100);
    st.push(20);
    st.push(300);
    st.push(55);
    st.push(7);
    st.push(187);

    sortstack(st);

    //print stack - post sorting
    while(! st.empty()){

        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}