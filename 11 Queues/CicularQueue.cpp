#include <iostream>
#include <queue>

using namespace std;

//queue banane me 4 chize chaiye - ek array , dusra uska size, tisra front and last rear

//time and space complexity - O(1)

//iske ek bar pop karne k bad phirse push nai hota  - usse memory waste hota hai queue me hence we go for circular Queue

class CQueue{

    public:
        int *arr;
        int size;
        int front;
        int rear;

    CQueue(int size){

        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;

    }

    void Push(int val){

        //Overflow
        //empty case --> First Element
        //circular nature
        //normal flow

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

    void Pop(){

        //underflow
        //single element case
        //circular nature
        //normal flow

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

    // int getsize(){
    //     if(front==-1 && rear==-1 ){ //empty queue
    //         return 0;
    //     }else{
    //         return rear-front+1;

    //     }

    // }

    // bool isEmpty(){

    //     if(front == -1 && rear == -1){
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }

    // int getFront(){
    //     if(front==-1){
    //         cout << "No Ele in queue, hence nothing in front " <<endl;
    //         return -1;
    //     }else{
    //         return arr[front];
    //     }
    // }

    // int getRear(){
    //     if (rear == -1) {
    //         return -1;
    //     }else{
    //         return arr[rear];
    //     }

    // }

    void print(){
        cout << "Printig Queue- ";
        for(int i=0; i<size; i++){

            cout<< arr[i] << " ";
        }
        cout << endl;
    }

};



int main(){

    //creation
    CQueue q(5);
    q.print();

    q.Push(10);
    q.Push(100);
    q.Push(500);
    q.Push(600);
    q.Push(700);
    //q.Push(900);
    q.print();
    q.Pop();
    q.Pop();
    q.Pop();
    q.print();
    q.Push(111);
    q.Push(222);
    q.print();

    // cout << "Size-> " <<q.getsize() <<endl;

    // q.Pop();
    // q.Pop();
    // q.Pop();
    // q.Pop();
    // q.print();
    // cout << "Size-> " <<q.getsize() <<endl;

    // cout<< q.getFront() <<endl;
    // q.print();

    // q.Push(1000);
    // cout << "Size-> " <<q.getsize() <<endl;


    // cout<< q.getFront() <<endl;
    // q.print();
    // cout << "Size-> " <<q.getsize() <<endl;


    return 0;
}