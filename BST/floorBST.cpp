#include <bits/stdc++.h>
using namespace std;

Node* floorBST(Node* root, int x){
    Node* curr = root;
    Node* floor = NULL;
    
    while(curr != NULL){
       if(curr->key == x){
            return curr;
        }else if(curr->key > x){
            curr = curr->left;
        }else if(curr->key < x){
            floor = curr;
            curr = curr->right;
        } 
    }
    return floor;
    
}


int main()
{
    floorBST(root,14);
}
