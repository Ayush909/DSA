// Range method
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data = x;
        left = right = NULL
    }
}
bool checkBST(Node* root,int min,int max){
    if(root == NULL){
        return true;
    }
    return ( root->data > min &&
            root->data < max &&
            checkBST(root->left,min,root->data) &&
            checkBST(root->right,root->data,max)
            );
}

int main(){
    checkBST(root,INT_MIN,INT_MAX);
}