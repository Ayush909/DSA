#include <bits/stdc++.h>
using namespace std;

void inorderPrede(Node* root,Node* &prec,int x){

    if(root == NULL){
        return;
    }
    // if key is found, check if there is left subtree
    // if it is present, find maximum of leftsubtree and it is predecessor
    // if key > root->data : move to right subtree and store prec = root on every right turn
    // if key < root->data : move to left subtree
    // finally print prec
    if(root->data == x){
        if(root->left != NULL){

            Node* tmp = root->left;
            while(tmp->right != NULL){
                tmp = tmp -> right;
            }
            prec = tmp;
        }else{
            return ;
        }
    }else if(x > root->data){
        prec = root;
        inorderPrede(root->right,prec,x);
    }else{
        inorderPrede(root->left,prec,x);
    }
}

int main(){

    Node* root = NULL;
    root = insertNode(root,80);
    insertNode(root,70);
    insertNode(root,90);
    insertNode(root,60);
    insertNode(root,75);
    insertNode(root,85);
    insertNode(root,100);

    inorder(root);
    cout<<endl;
    Node * prec = NULL;
    inorderPrede(root,prec,60);
    if(prec!=NULL){
        cout<<prec->data;
    }else{
        cout<<"No predecessor";
    }


    return 0;
}
