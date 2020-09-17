#include <bits/stdc++.h>
using namespace std;

//Floor
// Time : O(h)
// Aux Space: O(1)
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

//Ceil
// Time : O(h)
// Aux Space: O(1)
Node* ceilBST(Node* root, int x){
    Node* curr = root;
    Node* ceil = NULL;
    while(curr != NULL){
        if(curr->key == x){
            return curr;
        }else if(curr->key > x ){
            ceil = curr;
            curr = curr->left;
        }else if(curr->key < x){
            curr = curr->right;
        }
    }
    return ceil;

}


int main()
{
    floorBST(root,14);
}
