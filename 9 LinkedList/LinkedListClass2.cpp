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

    //destructor
    ~Node(){
        cout<< "Destructor called for: " << this->data <<endl;
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

    int length = getLength(head);

    if(position <= 1){ //that means ye head pe insert karna chahta hai
        insertAthead(head, tail, data);
    }else if(position >= length+1){ //yaha dhyan rakhana kyu ki last me add karna hai
        insertatTail(head, tail, data);
    }

    // Insert at middle of LL

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


void deleteNode(Node *&head, Node *&tail, int position){

    //empty list
    if(head == NULL){
        cout << "LL is empty "<< endl;
        return ;
    }

    //single ele case
    if(head == tail){

        Node *temp=head;
        delete temp;

        head = NULL;
        tail = NULL;
        return;

    }

    int len = getLength(head);

    //multiple element case
    //delete from head
    if(position == 1){
        //first node ko delete kardo
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;   //here destructor is called

    }else if(position == len){

        //find prev -- jabtak prev tail tak nai pohochta , age badho.
        Node *prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }

        //prev node ka link null kardo
        prev->next = NULL;

        //delete tail
        delete tail;

        //update tail
        tail = prev;

    }else{
        //middle me koi node delete kardo

        //step 1 : set prev/curr pointers
        Node *prev = NULL;
        Node *curr = head;

        while(position !=1){
            position--;
            prev = curr;
            curr = curr->next;
        }

        //step 2 - prev k next me curr ka next add karo - so that curr ko hata sakte
        prev->next = curr->next;

        //step 3 - node isolate kardo
        curr->next = NULL;

        //step4- delete the node curr
        delete curr;

    }

}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertAthead(head, tail, 1000);
    insertatTail(head, tail, 10);
    insertatTail(head, tail, 20);
    insertatTail(head, tail, 30);
    insertatTail(head, tail, 40);

    printLL(head);

    insertatPosition(head, tail, 250, 2);
    printLL(head);

    insertatPosition(head, tail, 1250, 4);
    printLL(head);

    deleteNode(head, tail, 2);
    printLL(head);


    return 0;labs                                       `
}