#include <iostream>
#include <vector>
#include<queue>

using namespace std;

class Node{

    public:

    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data){

    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    //its not the first node -[ pehli node already created]
    if(data > root->data ){
        root->right = insertIntoBST(root->right, data); //data bada hai root data se to right me tree extend karo

    }else{

        root->left = insertIntoBST(root->left, data); //data chota hai root data se, hence left me extend karenge
    }

    return root;

}

void createBST(Node* &root){

    cout << "Enter data: " <<endl;
    int data;
    cin >> data;

    while(data!=-1){

        root = insertIntoBST(root, data);
        cout << "Enter data: " <<endl;
        cin >> data ; //take data inp for remaining nodes as we are inside while loop

    }

}

//to print tree - use level order code
void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){ //matlab already child eles are added in queue
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left != NULL){
                q.push(temp->left);
            }

            if(temp->right != NULL){
                q.push(temp->right);
            }

        }
    }

}


//To get data of tree into sorted order - use in-order
void inorder(Node* root){
    // LNR --but for solving BST into Doubly LL we need to solve using RNL -- left ka head pure LL ka head hoga islia easy padega

    //Base
    if(root == NULL){
        return;
    }

    inorder(root->right);
    cout << root->data << " ";
    inorder(root->left);
}

Node* bstFromInOrder(int inorder[], int s, int e){

    //base case
    if(s>e){
        return NULL;
    }

    //1 case solve karo
    int mid = (s+e)/2;
    int element = inorder[mid];

    Node* root = new Node(element);


    //baki recursion dekhega
    root->left =  bstFromInOrder(inorder, s, mid-1);
    root->right= bstFromInOrder(inorder, mid+1, e);

    return root;

}


//Convert BST into Sorted Doubly Linked List
void convertBSTtoDLL(Node* root, Node* &head){

    //base case
    if(root == NULL){
        return;
    }

    //RNL


    //Recursion
    convertBSTtoDLL(root->right, head);


    //Current Node
    // 1. root k right ko head pe connect karo
    root->right = head;

    // 2.  head -> prev pointer root pe connect karo
    if(head != NULL){
        head->left = root;
    }

    // 3. head ko wapas root pe leke aao - new LL ban gae hai islia
    head = root;


    //go to left
    convertBSTtoDLL(root->left, head);

}

//Doubly Linked List to Binary Search Tree
Node* convertDLLtoBST(Node* &head, int n){

    //base case
    if(head == NULL || n<=0){
        return NULL;
    }

    //LNR - In order

    //Left subtree
    Node* leftSubtree = convertDLLtoBST(head, n/2);

    //Node
    Node* root = head;
    root -> left = leftSubtree;

    //update head - kyu ki right subtree k lie lagega
    head = head->right;

    //Right sub tree
    Node* rightSubtree = convertDLLtoBST(head, (n-n/2)-1);
    root->right = rightSubtree;
    return root;

}

void printLinkedList(Node* head){

    Node* temp = head;
    cout << "Printing entire list : " <<endl;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->right;
    }

    cout <<endl;

}


int main(){

    //Node* root = NULL;
    //createBST(root);

    // int inorder[] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int start = 0;
    // int end = size-1;

    // Node* root = bstFromInOrder(inorder, start, end);

    // levelOrderTraversal(root);

    // Node* head = NULL;
    // convertBSTtoDLL(root, head);
    // printLinkedList(head);


    //DLL to BST
    Node* first = new Node(10);
    Node* second =  new Node(20);
    Node* third = new Node(30);

    first->right = second;
    second->left = first;
    second->right = third;
    third -> left = second;

    Node* head = first;
    //10 <-> 20 <-> 30

    Node* root =  convertDLLtoBST(head, 3);
    levelOrderTraversal(root);
    //printLinkedList(head);



    return 0;
}
