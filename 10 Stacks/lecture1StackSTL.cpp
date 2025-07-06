#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//Note - Stack elements can not be accessed through indexes , only way is to check top of the stack.

int main(){

    //creation
    stack<int>st;

    //update
    st.push(12);
    st.push(11);
    st.push(10);

    //size
    cout << "Size of stack is -> " << st.size() <<endl;

    st.pop();

    //size
    cout << "Size of stack is -> " << st.size() <<endl;

    //check empty
    if(st.empty()){
        cout << "Stack is empty " <<endl;
    }else{
        cout << "Stack is not empty" <<endl;
    }

    //top
    cout <<st.top() <<endl;


    return 0;
}