//reverse LL
#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Create Node Class
class Node{

    public:
        int data;
        Node *next;

    //default ctor
    Node(){

        this ->next = NULL;

    };

    //param ctor
    Node(int data){

        this -> data = data;
        this -> next = NULL;

    };

    //default dtor
    ~Node(){

        cout << "Dtor is called for : " << this->data <<endl;

    };

};

// create print LL
void printLL(Node *head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << "-->" ;
        temp=temp->next;
    }
}

// get LL length
int getLength(Node *head){

    Node *temp=head;
    int count=0;
    if (head ==NULL) return 0;

    while(temp != NULL){

        count++;
        temp = temp->next;
    }

    return count;

}

// insert at beginning
void inserthead(Node *&head, int data){
    Node *temp = head;
    Node *newNode = new Node(data);

    //LL empty
    if(head == NULL){
        //new node
        Node *newNode =new Node(data);
        head = newNode;
    }else{
        //new node
        Node *newNode =new Node(data);
        newNode->next = head;
        head = newNode;
    }

}

//create tail
void createTail(Node *head, Node *&tail){

    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    tail = temp;

}

//insert at end
void insertatend(Node *&head, Node *&tail, int data){
    //find tail
    createTail(head, tail);

    // Use tail
    Node *temp = tail;
    Node *newNode =new Node(data);

    if(tail==NULL){
        Node *newNode =new Node(data);
        tail = newNode;
    }else{
        Node *newNode =new Node(data);
        tail->next = newNode;
        tail = newNode;
    }

}

//insert at input position
void insertatPos(Node *&head, Node *&tail, int data, int position){

    Node *temp = head;
    Node *newNode = new Node(data);

    Node *prev = NULL;
    Node *curr = head;

    int len = getLength(head);

    if(position<=1){
        inserthead(head, data);
    }else if(position>=len+1){
        insertatend(head, tail, data);
    }

    while(position !=1){

        prev=curr;
        curr=curr->next;
        position--;

    }

    prev->next = newNode;
    newNode->next = curr;

}


//delete LL nodes
void delLL(Node *&head, Node *&tail, int position){

    Node *temp = head;
    int len = getLength(head);
    createTail(head, tail);

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

    if(position==1){
        //delete at head
        Node *temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;

    }else if(position == len){
        //delete at tail
        Node *prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }

        prev->next = NULL;
        delete tail;

        tail=prev;

    }else{
        //delete at pos
        Node *prev=NULL;
        Node *curr=head;

        while(position !=1 ){
            position--;
            prev = curr;
            curr = curr->next;

        }

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }

}


int main(){

    Node *head = NULL;
    Node *tail = NULL;

    inserthead(head, 10);
    inserthead(head, 20);
    inserthead(head, 30);
    inserthead(head, 40);
    printLL(head);

    cout <<endl;

    insertatend(head, tail, 5000);
    insertatend(head, tail, 4000);
    printLL(head);

    cout <<endl;

    insertatPos(head, tail, 1234, 3);
    printLL(head);
    cout <<endl;

    delLL(head, tail, 7);
    printLL(head);
    cout <<endl;

    cout << "Length of LL is - " << getLength(head) <<endl;


    return 0;
}


//leet code 142 question - https://leetcode.com/problems/linked-list-cycle-ii/
//check loop
//get start point of loop
//
Node *getStartingPoint(Node *head){

    Node *slow=head;
    Node *fast=head;

    while(fast != NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast->next;
            slow=slow->next;
        }

        if(fast == slow){
            break;
        }
    }

    //yaha aaya matlab slow and fast meet kar chuke hai
    slow=head;

    //slow and fast ek step move karnge
    while(fast != slow){
        slow = slow->next;
        fast = fast->next;
    }

    //return starting point
    return slow;


}


ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL) {
            fast = fast ->next;
            if(fast->next != NULL) {
                fast = fast -> next;
                slow = slow -> next;
            }
        }

        return slow;
    }