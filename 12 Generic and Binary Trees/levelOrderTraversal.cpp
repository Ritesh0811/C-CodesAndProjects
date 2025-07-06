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

//Normal printing op in 1 line
/*
void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);

    //yaha se breadth search traversal shuru

    while(!q.empty()){

        Node* front = q.front();
        q.pop();

        cout << front->data << " ";

        if(front->left != NULL){
            q.push(front->left);
        }

        if(front->right != NULL){
            q.push(front->right);
        }

    }
}
*/

//PRinting op level wise
void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //yaha se breadth search traversal shuru

    while(q.size()>1){ //yaha !q.empty() ye karenge to infinite loop me fas jate hai - hence q.size > 1

        Node* front = q.front();
        q.pop();

        if(front ==  NULL){ //pehle print kardo and then NULL add kardo kyuki level is completed.
            cout<<endl;
            q.push(NULL);

        }else{ //valid node wala case - matlab front me NULL nahi hai
            cout << front->data << " ";

            if(front->left != NULL){
                q.push(front->left);
            }

            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}


int main(){

    Node* root = createTree();
    //cout << root->data <<endl;

    cout << "Printing Level Order: " ;
    levelOrderTraversal(root) ;
    cout <<endl;

    return 0;
}


//Note - Pehle left sid wala sara subtree banke ready hoga then right side wala then finally root node print hoga

//Note - Ip Tree - Give below input to code
//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1