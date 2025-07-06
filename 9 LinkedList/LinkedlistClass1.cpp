#include <iostream>
#include <string>

using namespace std;

class Node{

    public:
        int data;
        Node *next;

    //default ctor
    Node(){
        //cout <<"Inside default ctor" <<endl;
        this->next = NULL;
    }

    //param ctor
    Node(int data){
        //cout <<"Inside Param ctor" <<endl;
        this->data = data;
        this->next = NULL;
    }

};

//print LL
void printLL(Node *head){

    //never use same inputted ptr, always create temp ptr
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;

    }

    cout <<endl;
}

//get LL length
int getLength(Node *head){

    Node *temp = head;
    int count = 0;

    while(temp != NULL){

        count++;
        temp = temp->next;
    }

    return count;
}

//Insertion at head -- always take head as pass by reference[&] and not by value
void insertAthead(Node *&head, Node *&tail, int data){
    //assume - postion ki value is from 1 to length+1 tak

    //to handle empty LL
    if(head ==  NULL){
        //new node
        Node *newNode =new Node(data);

        //update head
        head = newNode;
        tail = newNode;

    }else{//non empty LL

        //create new node
        Node *newNode = new Node(data);

        //attach new node to head node
        newNode -> next = head;

        //update head
        head = newNode;

    }

}


//Insert at tail
void insertatTail(Node *&head, Node *&tail, int data){

    if(head == NULL){
        //empty LL

        //step 1 - create a node
        Node *newNode = new Node(data);

        //step 2 - Single Node has same head and tail
        head = newNode;
        tail = newNode;

    }else{

        //non empty LL
        //step 1 : create new temp node
        //int *ptr = new int[10] ; -- usike jaise niche int replaced with Node
        Node *newNode = new Node(data);
        //step 2 : tail node ko attach karo new node se
        tail->next = newNode;

        //step 3 : update tail
        tail = newNode;

    }

}

//in generic case - create a tail
void createTail(Node *head, Node *&tail){

    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    tail = temp;

}


//Insert at any position
void insertatPosition(Node *&head, Node *&tail, int data, int position){

    // //1
    // if(position < 1){
    //     cout << "Invalid Position"<<endl;
    //     return;
    // }
    //2
    int length = getLength(head);

    // if(position > length){
    //     //cout << "Not valid input" << endl;
    //     insertatTail(head, tail, data);
    //     return;
    // }

    //3

    if(position <= 1){ //that means ye head pe insert karna chahta hai
        insertAthead(head, tail, data);
    }else if(position >= length+1){ //yaha dhyan rakhana kyu ki last me add karna hai
        insertatTail(head, tail, data);
    }

    //4 Insert at middle of LL

    //step 1 - create new node
    Node *newNode = new Node(data);

    //step 2 - traverse prev //curr to position
    Node *prev = NULL;
    Node *curr = head;

    while(position != 1){
        prev = curr;
        curr = curr->next;
        position--;

    }

    //step 3 - attach prev to new node
    prev -> next = newNode;

    //step 4 - attach new node next to curr node
    newNode -> next = curr;
}



int main(){

    Node *head = NULL;
    Node *tail = NULL;

    // insertAthead(head, tail, 10);
    // insertAthead(head, tail, 20);
    // insertAthead(head, tail, 30);

    insertatTail(head, tail, 10);
    insertatTail(head, tail, 20);
    insertatTail(head, tail, 30);
    insertatTail(head, tail, 40);

    printLL(head);

    insertatPosition(head, tail, 250, 2);
    printLL(head);

    insertatPosition(head, tail, 1250, 4);
    printLL(head);


    // //creation of Node  -- Static allocation -- calls default ctor.
    // // Node a; //op = Inside default ctor

    // //dynamic allocation [Heap]
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // //head
    // Node *head = first;
    // Node *tail = fifth;

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // //Linked List is created.

    // //to print Linked List
    // cout <<"Printing entire LL - " <<endl;
    // printLL(head);

    // cout <<"Length of LL is - " << getLength(head) <<endl;

    // insertAthead(head, tail, 500);

    // printLL(head);

    // insertatTail(head, tail, 1000);

    // printLL(head);

    return 0;
}