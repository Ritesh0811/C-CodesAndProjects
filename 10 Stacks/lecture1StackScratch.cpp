#include<iostream>
#include<vector>

using namespace std;

//Note - Overflow and Underflow ki conditions dyan rakhna hamesha
//normally there is no print functionality in stack - bus top ele dekh sakte hai waise to

//all operations are done in O(1).


class Stack{

    public:

        int *arr;
        int size;
        int top;

    Stack(int size){
        //default ctor
        arr = new int[size]; //Note karo - yaha brackets [] aaenge na ki ()
        this->size = size; //class wali "size" me bahar se aae hue "size" add kardi
        this ->top = -1;
    }

    void push(int data){
        //overflow case
        if(top == size-1){
            cout << "Stack overflow " <<endl;
            return;
        }else{
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        //underflow case
        if(top == -1){
            cout << "stack underflow " <<endl;
            return;
        }else{
            top--;
        }
        ;
    }

    bool isempty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    int gettop(){
        //underflow
        if(top == -1){
            cout << "stack is empty" <<endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    int getsize(){
        return top+1;
    }

    void print(){
        cout << "TOP --> " << top << endl;
        cout << "TOP Element -> " << gettop() <<endl;
        cout << "Stack --> " ;
        for(int i=0; i<getsize(); i++){
            cout << arr[i] << " " ;
        }
        cout <<endl << endl;
    }


};


int main(){

    //creation
    Stack st(8);

    //push
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();

    st.pop();
    st.print();

    if(st.isempty()){
        cout<< "Stack is Empty";
    }else{
        cout<<"Not empty";
    }

    return 0;
}