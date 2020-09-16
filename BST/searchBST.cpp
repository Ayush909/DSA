#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};
//Recursive Approach
//Time complex :  O(h)
//Auxiliary Space : O(h)

bool searchNode(Node* root,int x){
    if(root == NULL){

        return false;

    }else if(root->key == x){

        return true;

    }else if(x > root->key){

        return searchNode(root->right,x);

    }else{
        return searchNode(root->left,x);
    }
}

//Interative approach
// Time complex : O(h)
// No extra space required
bool searchNode(Node* root,int x){
    while(root != NULL){
        if(root->key == x){
            return true;
        }else if( x > root->key){
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return false;
}

//Recursive Approach
//Time complex :  O(h)
//Auxiliary Space : O(h)

Node* insertNode(Node* root,int x){
    if(root == NULL){
        Node* temp = new Node(x);
        return temp;
    }

    if(x > root->key){
        root->right  = insertNode(root->right,x);
    }else if(x < root->key){
        root->left = insertNode(root->left,x);
    }
    return root;

};

//Interative approach
// Time complex : O(h)
// No extra space required
Node* insertNode(Node* root, int x){
    Node* temp = new Node(x);
    Node* curr = root;
    Node* parent = NULL;

    while(curr != NULL){

        parent = curr;

        if(curr->key == x){
            return root;
        }else if(x > curr->key){
            curr = curr->right;
        }else{
            curr = curr->left;
        }
    }
    if(parent == NULL){

        return temp;

    }else if(x > parent->key){

        parent->right = temp;

    }else if(x < parent->key){

        parent->left = temp;

    }
     return root;

}




int main(){

    Node* root = NULL;
    root = insertNode(root,10);
    insertNode(root,6);
    insertNode(root,20);


    return0;
}
