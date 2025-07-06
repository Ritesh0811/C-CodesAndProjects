#include <iostream>
#include <queue>

using namespace std;

//queue banane me 4 chize chaiye - ek array , dusra uska size, tisra front and last rear

//time and space complexity - O(1)

//iske ek bar pop karne k bad phirse push nai hota  - usse memory waste hota hai queue me hence we go for circular Queue

class Queue{

    public:
        int *arr;
        int size;
        int front;
        int rear;

    Queue(int size){

        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;

    }

    void Push(int val){

        //check full
        if(rear == size-1){
            cout << "Queue Overflow: " <<endl;

        }else if(front ==-1 && rear==-1){
            //empty case
            front++;
            rear++;
            arr[rear] = val;
        }else{
            //normal case
            rear++;
            arr[rear] = val;
        }
    }

    void Pop(){
        //underflow
        if(front ==-1 && rear ==-1){
            cout << "Queue Underflow " <<endl;
            return;
        }else if(front == rear){
            //empty case -> single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }else{
            //normal case
            arr[front] = -1;
            front++;
        }
    }

    int getsize(){
        if(front==-1 && rear==-1 ){ //empty queue
            return 0;
        }else{
            return rear-front+1;

        }

    }

    bool isEmpty(){

        if(front == -1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }

    int getFront(){
        if(front==-1){
            cout << "No Ele in queue, hence nothing in front " <<endl;
            return -1;
        }else{
            return arr[front];
        }
    }

    int getRear(){
        if (rear == -1) {
            return -1;
        }else{
            return arr[rear];
        }

    }

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
    Queue q(5);
    q.print();

    q.Push(10);
    q.Push(100);
    q.Push(-23);
    q.Push(500);
    q.Push(600);
    //q.Push(700);
    q.print();
    cout << "Size-> " <<q.getsize() <<endl;

    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.print();
    cout << "Size-> " <<q.getsize() <<endl;

    cout<< q.getFront() <<endl;
    q.print();

    q.Push(1000);
    cout << "Size-> " <<q.getsize() <<endl;


    cout<< q.getFront() <<endl;
    q.print();
    cout << "Size-> " <<q.getsize() <<endl;


    return 0;
}