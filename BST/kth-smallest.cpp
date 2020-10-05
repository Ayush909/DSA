//Naive : O(n) using inorder traversal
#include <bits/stdc++.h>
using namespace std;
void kinorder(Node* root,int k,int nums[]){

    if(root != NULL){

        kinorder(root->left,k,nums);
        nums[0]++;
        if(nums[0] == k){
            nums[1] = root->key;
            return;

        }
        kinorder(root->right,k,nums);

    }else{
        return;
    }

}

int kthsmallest(Node* root,int k){
    int nums[2] = {0,0};
    kinorder(root,k,nums);
    return nums[1];
}

int main(){

    Node* root = NULL;
    root = insertNode(root,10);
    insertNode(root,5);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,15);
    insertNode(root,13);
    insertNode(root,20);

    cout<<kthsmallest(root,3);

    return 0;
}
