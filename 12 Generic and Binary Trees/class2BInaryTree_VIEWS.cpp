#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }

};

Node* createTree(){

    cout << "Enter val for Node : -" ;
    int value ;
    cin >> value;

    if(value == -1){
        return NULL;
    }

    //create Node
    Node* root = new Node(value);

    cout << "Entering in left of : " <<value <<endl;
    root->left = createTree();
    cout << "Entering in right of : " <<value <<endl;
    root->right = createTree();


    return root;

}

void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

}

void InOrder(Node* root){

    if(root == NULL){
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);

}

void postOrder(Node* root){

    if(root == NULL){
        return;
    }


    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout << endl;


    while(! q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;

            if(!q.empty()){
                q.push(NULL); // Mark the end of a level
            }
        }
        else{

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

void printLeftView(Node* root, int level, vector<int>& leftView){

    if(root == NULL){
        return;
    }

    //iska matlav , leftvoew wali node mil gae hai - so store karlo
    if(level == leftView.size()){
        leftView.push_back(root->data);
    }

    //recursion
    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);

}

void printRightView(Node* root, int level, vector<int>& rightView){

    if(root == NULL){
        return;
    }

    //iska matlav , leftvoew wali node mil gae hai - so store karlo
    if(level == rightView.size()){
        rightView.push_back(root->data);
    }

    //recursion
    printRightView(root->right, level+1, rightView);
    printRightView(root->left, level+1, rightView);

}


//khudke level create karo - vertical levels [ Just like above horizontal levels]

void printTopView(Node* root){

    map<int,int> hdtoNodemap ; //horizontal distance in Node [hd is horizontal distance]
    queue <pair<Node*,int>> q; //Pair me 2 chize store kar0 - Node and hori distance to Node

    q.push(make_pair(root, 0)); //root value and root is always at level 0

    //iske bad sara level order jaise code  - just yaha pair hai queue me

    while(! q.empty()){

        pair<Node*, int> temp = q.front(); //queue k andar ka pair leke temp me store kia
        q.pop();

        //temp k andar ki 2 values bahar nikal rakhi -
        Node* frontNode = temp.first;
        int hd = temp.second;

        //if there is no entry in hd in map ,then create a new entry - Level k agaist entry nai hai to add karo warna nai

        if(hdtoNodemap.find(hd) == hdtoNodemap.end()){
            hdtoNodemap[hd] = frontNode -> data;

        }

        //node k child ko dekho -

        //left me jao to hd -1 kyu ki root middle node ka 0 level , left wale -1, -2 and so on and right wale 1,2 and so on
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left, hd-1) );

        }

        //same for right nooes
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right, hd+1) );

        }
    }

    cout << "Printing top view: " <<endl;

    for(auto i:hdtoNodemap){
        cout << i.second << " ";
    }

}

void printBottomView(Node* root){

    map<int,int> hdtoNodemap ; //horizontal distance in Node [hd is horizontal distance]
    queue <pair<Node*,int>> q; //Pair me 2 chize store kar0 - Node and hori distance to Node

    q.push(make_pair(root, 0)); //root value and root is always at level 0

    //iske bad sara level order jaise code  - just yaha pair hai queue me

    while(! q.empty()){

        pair<Node*, int> temp = q.front(); //queue k andar ka pair leke temp me store kia
        q.pop();

        //temp k andar ki 2 values bahar nikal rakhi -
        Node* frontNode = temp.first;
        int hd = temp.second;

        //if there is entry in hd in map ,then replce with a new entry [Overrite the node value against level]
        hdtoNodemap[hd] = frontNode -> data;

        //node k child ko dekho -

        //left me jao to hd -1 kyu ki root middle node ka 0 level , left wale -1, -2 and so on and right wale 1,2 and so on
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left, hd-1) );

        }

        //same for right nooes
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right, hd+1) );

        }
    }

    cout << "Printing top view: " <<endl;

    for(auto i:hdtoNodemap){
        cout << i.second << " ";
    }

}



int main(){

    Node* root = createTree();
    levelOrderTraversal(root);
    //cout << root;

    printTopView(root);
    //printBottomView(root);


    //leftview
    // vector<int> leftView;
    // printLeftView(root, 0, leftView);

    // cout << "Printing left view: " <<endl;
    // for(int i=0; i<leftView.size(); i++){
    //     cout << leftView[i] <<" ";
    // }

    /*
    vector<int> rightView;
    printRightView(root, 0, rightView);

    cout << "Printing right view: " <<endl;
    for(int i=0; i<rightView.size(); i++){
        cout << rightView[i] <<" ";
    }
    */

    return 0;
}


//Note - Ip Tree - Give below input to code
//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1