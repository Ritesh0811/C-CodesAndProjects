#include<iostream>
#include <stack>
#include<vector>

//side wale se ele bada hai to uski jaga -1 store karo - else -1 store karo
// side compare karenge to O(n2) operations lagenge - hence its reverse the array and use stack to traverse
// rightmost ele k right me koi nai hai islia -1 add kar dete hai stack me
// then rightmost ko uske left wale se compare karte hai - agar chota nikla left wala to right wale ko pop karenge
// left wale ko stack me add karenge - usko b kisi k sath compare karna hai na

//MOST MOST IMP QUESTION


using namespace std;


vector<int> nextSmallElement(int *arr, int size, vector<int> &ans){

    stack<int> st;
    st.push(-1);

    for(int i=size-1; i>=0; i--){

        //find ans for curr
        int curr = arr[i];

        while(st.top() >=curr ){
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr);

    }

    return ans;

}

vector<int> prevSmallElement(int *arr, int size, vector<int> &ans){

    stack<int> st;
    st.push(-1);

    for(int i=0; i<size; i++){

        //find ans for curr
        int curr = arr[i];

        while(st.top() >=curr ){
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr);

    }

    return ans;

}


int main(){

    int arr[5] = {8,4,6,2,3};
    int size = 5 ;

    vector<int> prev(size);

    cout << "prev : " <<endl;

    prev = prevSmallElement(arr, size, prev);

    for(auto  i : prev){

        cout << i << " ";

    }

    cout <<endl;

    vector<int> next(size);

    cout << "next : " <<endl;

    next = nextSmallElement(arr, size, next);

    for(auto  i : next){

        cout << i << " ";

    }

    cout <<endl;

    return 0;
}