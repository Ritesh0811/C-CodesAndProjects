
//Entire Boundary -- GFG pe hai code probleem

// pehle left wala print karo jabtak leaf nai milti -- Part A
// then leaf node side -- Part B
// then right wala part -- Part C


#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <map>


using namespace std;


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


void printLeftBoundary(Node* root){

    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        return;
    }

    cout << root->data << " ";

    if(root->left != NULL){
        printLeftBoundary(root->left);

    }else{
        printLeftBoundary(root->right);
    }

}

//isme pure tree me traverse karna left se right ki disha me

void printLeafBoundary(Node* root){

    if(root == NULL){

        return;
    }

    if(root->left == NULL && root->right == NULL){
        cout << root->data << " ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);

}

void printRightBoundary(Node* root){

    if(root == NULL){

        return;
    }

    if(root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right != NULL){
        printRightBoundary(root->right);

    }else{
        printRightBoundary(root->left);
    }

    cout << root->data << " ";

}


void boundaryTraversal(Node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right);


}

int main(){

    Node* root = createTree();

    //cout << root;
    boundaryTraversal(root);

    return 0;
}

//Note - Ip Tree - Give below input to code
//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1