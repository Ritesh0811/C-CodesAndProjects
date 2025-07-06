#include <iostream>

using namespace std;

//4 functions - Push Back, Push Front, Pop Front , Pop Back
//Normal Dequeue and not a circular dequeue

class Dequeue{

    public:
        int *arr;
        int size;

        int front;
        int rear;


        Dequeue(int size){

            arr = new int[size];
            this->size = size;
            front =  -1;
            rear = -1;
        }

        void pushFront(int val){

            //overflow
            if((front == 0 && rear == size-1) || (rear == front-1)){
                cout << "Overflow " <<endl ;

            }else if(front == -1 && rear==-1 ){
                //empty case
                front++;
                rear++;

                arr[front] = val;

            }else if(front ==0 && rear != size-1 ){ //to maintain circular nature
                front = size-1;
                arr[front] = val;
            }
            else{//normal flow
                front--;
                arr[front] = val;
            }
        }

        void pushBack(int val){

            if((front == 0 && rear == size-1) || (rear == front-1)){
                //Overflow
                cout << "OPverflow - Hence cant be added." ;

            }else if(front ==-1 && rear == -1){
                //empty case --> First Element
                front ++;
                rear++;
                arr[rear] = val;

            }else if(rear==size-1 && front !=0 ){
                //circular nature
                rear = 0;
                arr[rear] = val;
            }else{
                //normal flow
                rear++;
                arr[rear] = val;
            }

        }

        void popFront(){

            //underflow
            if(front ==-1 && rear ==-1){
                cout << "Queue Underflow " <<endl;
                //return;
            }else if(front == rear){
                //empty case -> single element
                arr[front] = -1;
                front =-1;
                rear = -1;
            }else if(front == size-1 ){
                //circular case
                arr[front] = -1;
                front = 0;
            }else{
                //normal flow
                arr[front]=-1;
                front++;
            }
        }

        void popBack(){
            //underflow
            if(front ==-1 && rear ==-1){
                cout << "Queue Underflow " <<endl;
                //return;
            }else if(front == rear){
                //empty case -> single element
                arr[rear] = -1;
                front = -1;
                rear = -1;
            }else if(rear==0){//cirular
                arr[rear] = -1;
                rear = size -1 ;
            }
            else{
                //normal case
                arr[rear] = -1;
                rear--;
            }

        }


};


int main(){



    return 0;
}