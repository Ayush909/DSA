#include <bits.stdc++.h>
using namespace std;

int height(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return max( getheight(root->left), getheight(root->right) ) + 1;
    }
}

int diameter(Node* root){

    if(root == NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    return max(lheight + rheight + 1, max(ldiameter,rdiameter));
}

int main(){
    return 0;
}