#include<iostream>
#include<stack>

using namespace std;

void insertatBottom(stack<int> &st, int ele){

    //base case
    if(st.empty()){
        st.push(ele);
        return;
    }

    //1 case solve karo
    int temp = st.top();
    st.pop();

    //recursion
    insertatBottom(st, ele);

    //back- tracking
    st.push(temp);


}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int ele = 400;

    insertatBottom(st, ele);

    while(! st.empty()){

        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}