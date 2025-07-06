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
            if(!q.empty()){ //matlab already childs are added in queue
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

void preorder(Node* root){ // Root Left Right --> NLR

    //Base
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root){ // LNR

    //Base
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){ //LRN

    //Base
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

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


int main(){


    int inorder[] = {10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;

    Node* root = bstFromInOrder(inorder, start, end);

    levelOrderTraversal(root);

    cout <<endl;

    return 0;
}