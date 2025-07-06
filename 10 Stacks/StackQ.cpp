#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//middle element of the stack

//Note - Stack elements can not be accessed through indexes , only way is to check top of the stack.


void solve(stack<int> &st, int &pos, int &ans){

    //base case
    if(pos == 1){
        ans = st.top();
        return;
    }

    //1 case hum karenge
    //pos decrease karo , top ko save karo and pop karo.
    pos--;
    int temp = st.top();
    st.pop();

    //recursion
    solve(st, pos, ans);

    //backtracking
    st.push(temp);

}

int getMiddleEle(stack<int> &st){

    int size = st.size();
    if(st.empty()){

        return -1; //stack is empty

    }else{

        int pos = 0;
        //odd wala case
        if(size & 1){
            pos = size/2 + 1;
        }else{
        //even wala case
            pos = size/2;
        }

        int ans = -1;
        solve(st, pos, ans);
        return ans;
    }
}


int main(){

    //creation
    stack<int>st;

    //update
    st.push(12);
    st.push(11);
    // st.push(10);
    // st.push(40);
    // st.push(50);
    // st.push(50);

    int mid = getMiddleEle(st);

    cout << "Middle Element " << mid <<endl;


    // //size
    // cout << "Size of stack is -> " << st.size() <<endl;

    // st.pop();

    // //size
    // cout << "Size of stack is -> " << st.size() <<endl;

    // //check empty
    // if(st.empty()){
    //     cout << "Stack is empty " <<endl;
    // }else{
    //     cout << "Stack is not empty" <<endl;
    // }

    // //top
    // cout <<st.top() <<endl;


    return 0;
}