#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

// Binary tree -- Max 2 childs per node -- data , left , right
// Generic Tree -- Multiple childs --> use array/vector of Node* type to store multi elements --> vector<Node *> child;


class Node{

    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }

};

//it returns root node of created tree
Node *createTree(){

    cout << "Enter the val: " <<endl;
    int data;
    cin >> data;

    //agar user ko left ya right me kuch nai lagana hai as a Node then we will assume data given is -1
    // this is also base case of recursion
    if(data==-1){
        return NULL;
    }

    //step 1 - create Node -- agar data me -1 me alawa kuch inp hai to node banao
    Node *rootNode = new Node(data);

    //step 2 - create left sub tree - use recursion
    cout << "Left of Node - " << rootNode->data <<endl;
    rootNode->left = createTree();

    //step 3 - create right subtree - using recursion

    cout << "Right of Node - " <<rootNode->data <<endl;
    rootNode->right = createTree();

    return rootNode;

}

void preOrderTraversal(Node* root){

    //base case
    if(root == NULL){
        return ;
    }

    //Node - Left - Right

    //N
    cout<< root -> data <<" ";

    //L
    preOrderTraversal(root->left);

    //R
    preOrderTraversal(root -> right);

}

void InOrderTraversal(Node* root){

    //base case
    if(root == NULL){
        return ;
    }

    // Left - Node-  Right

    //L
    InOrderTraversal(root->left);

    //N
    cout<< root -> data <<" ";

    //R
    InOrderTraversal(root -> right);

}

void postOrderTraversal(Node* root){

    //base case
    if(root == NULL){
        return ;
    }

    // Left -  Right - Node

    //L
    postOrderTraversal(root->left);

    //R
    postOrderTraversal(root -> right);

    //N
    cout<< root -> data <<" ";

}

int main(){

    Node* root = createTree();
    //cout << root->data <<endl;

    cout << "Printing Preorder: " ;
    preOrderTraversal(root) ;
    cout <<endl;

    cout << "Printing Inorder: " ;
    InOrderTraversal(root) ;
    cout <<endl;

    cout << "Printing Postorder: " ;
    postOrderTraversal(root) ;
    cout <<endl;

    return 0;
}


//Note - Pehle left sid wala sara subtree banke ready hoga then right side wala then finally root node print hoga