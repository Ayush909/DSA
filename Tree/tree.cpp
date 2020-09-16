#include <bits/stdc++.h>
using namespace std;

//basic structure of a tree node
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

// inorder traversal 
// Time: O(n)
// Space: O(h+1) = O(h) :h->height of the tree
void inorder(Node* root){
    if( root!= NULL ){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

// preorder traversal
// Time and space same as inorder traversal
void preorder(Node* root){
    if( root!= NULL ){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

// postorder traversal
// Time and space same as inorder traversal
void postorder(Node* root){
    if( root!= NULL ){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}


// get size of the binary tree
// Time complexity :  O(n)
// Space complexity : O(h) -> h is height of the tree
int getsize(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return 1 + getsize(root->left) + getsize(root->right);
    }
}



// get height of the binary tree
// Time complexity :  O(n)
// Space complexity : O(h) -> h is height of the tree
int getheight(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return max( getheight(root->left), getheight(root->right) ) + 1;
    }
}

//Get the maximum element present on the tree
int getmax(Node* root){
    if(root == NULL){
        return INT_MIN;
    }else{
        return max(root->key,max( getmax(root->left) , getmax(root->right) ) ) ;
    }
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(60);
    root->left->right = new Node(12);

    inorder(root);
	return 0;
}
