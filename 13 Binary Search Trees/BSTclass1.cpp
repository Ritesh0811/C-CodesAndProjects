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

 //In-order of BST us always sorted.

 Node* minValue(Node* root){

    if(root == NULL){

        cout << "No MIN Value" <<endl;
        return NULL;
    }

    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;

 }

  Node* maxValue(Node* root){

    if(root == NULL){

        cout << "No Max Value" <<endl;
        return NULL;
    }

    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp;

 }

 bool searchInBST(Node* root, int target){

    //base case
    if(root == NULL){
        return false;
    }

    //1 case maine solve karna hai
    if(root -> data == target){
        return true;
    }

    //baki recursion dekhega
    //left me jau ya right me -- compare karke jao
    bool rightAns= false;
    bool leftAns = false;

    if(target > root->data){ //right me search karo

        rightAns = searchInBST(root->right, target);

    }else{
        leftAns = searchInBST(root->left, target);
    }

    return leftAns || rightAns;

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


//Delete Node from BST
Node* deleteFromBST(Node* root, int target){

    //target ko dhundo
    //target ko delete kardo

    //base case
    if(root == NULL){
        return NULL;
    }

    if(target == root->data){
        //delete kardo
        // 4 cases delete karne k lie

        //1st case --> leaf node
        if(root -> left == NULL && root->right == NULL){

            delete root;
            return NULL;

        }

        //2nd case --> left non null and right null
        else if(root -> left != NULL && root->right == NULL){

            Node* childSubtree = root->left;
            delete root;
            return childSubtree;

        }

        //3rd case --> left null and right non null
        else if(root -> left == NULL && root->right != NULL){

            Node* childSubtree = root->right;
            delete root;
            return childSubtree;

        }

        //4th case - left non null and right non null
        else{

            //a - left subtree ki max value lo  // agar right subtree loge to min nikalna padega
            Node* maxi = maxValue(root->left);

            //replacement
            root->data = maxi->data;

            //delete actual maxi node
            root->left = deleteFromBST(root->left, maxi->data);

            return root;

        }

    }
    else if(target > root->data){//right me chalo

        root->right =  deleteFromBST(root->right, target);

    }else{

        root->left = deleteFromBST(root->left, target);

    }

    return root;

}


int main(){

    Node* root = NULL;
    createBST(root);

    levelOrderTraversal(root);

    cout << endl << "Inorder: " ;
    inorder(root);

    cout << endl << "Preorder: " ;
    preorder(root);

    cout << endl << "Postorder: " ;
    postorder(root);

    cout <<endl;

    Node* minNode = minValue(root);

    if(minNode == NULL){
        cout<< "There is no node in tree , so no min val" <<endl;
    }else{
        cout << "Min value of BST : " << minNode->data << endl;
    }

    // //find ele in BST

    // int t;
    // cout << "Enter the target" <<endl;

    // cin >> t;

    // while (t!=-1)
    // {
    //     bool ans =  searchInBST(root, t);
    //     if(ans == true){

    //         cout << "Found" <<endl;
    //     }else{
    //         cout << "Not Found" <<endl;
    //     }

    //     cout << "Enter the target: " <<endl;
    //     cin >>t;
    // }

    //for delete
    int target;

    cout << "Enter target value - " <<endl;
    cin >> target;

    while(target != -1){

        root = deleteFromBST(root, target);
        cout << endl << "Printing Level Order Traversal: " <<endl;
        //print karke check karenge ki sachme delete hua ya nai
        levelOrderTraversal(root);


        cout << "Enter the value of target: " <<endl;
        cin >> target;


    }


    return 0;
}