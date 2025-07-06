#include<iostream>
#include<stack>

using namespace std;

//ek stack se dusri me dala to reverese ho jaega
// recursion se bhi ho jaega - 1 tum karo baki recursion karega

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

void reverseStack(stack<int> &st){

    //base case
    if(st.empty()){
        return;
    }

    //1 case solve karo
    int temp = st.top();
    st.pop();

    //recursion
    reverseStack(st);

    //backtracking -- wapas jake time st.push(temp) mat karo , instead add ele at bottom to overall reverse hoga stack
    insertatBottom(st, temp);

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

    // //print stack - without reverse
    // while(! st.empty()){

    //     cout << st.top() << " ";
    //     st.pop();
    // }

    reverseStack(st);

    //print stack  - with reverse
    while(! st.empty()){

        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}