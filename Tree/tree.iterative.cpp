#include <iostream>
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

//inorder traversal //Left root Right
//time comp: O(n)
//space comp: O(h) :-> h is height of the tree
void inorder(Node* root){
    stack<Node *> s;
    Node * curr = root;

    while(curr != NULL || s.empty() == false){
        while( curr != NULL ){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
    }
}

//preorder traversal
void preorder(Node* root){
   if( root == NULL ){
       return;
   }
   stack <Node* > s;
   s.push(root);

   while(s.empty() == false){
       Node* curr = s.top();
       cout<<curr->key<<" ";
       s.pop();
       if(curr->right != NULL){ s.push(curr->right)}; //we are pushing right first because we want left to be at the top of the stack(since it is preorder: root->left->right)
       if(curr->left != NULL){ s.push(curr->left)};
   }
}

// postorder traversal
// Remember : postorder traversal is actually reverse preorder traversal with (preorder as root->right->left)
void postorder(Node* root){
    stack<Node*> s1;
    stack<int> s2;
    s1.push(root);

    //doing preorder traversal (with pattern : root -> right -> left) & pushing into stack2
    while(s1.empty() == false){
        Node* curr = s1.top();
        s2.push(curr->key);
        s1.pop();
        if(curr->left != NULL){s1.push(curr->left);}
        if(curr->right != NULL) {s1.push(curr->right);}
    }

    //poping stack2 to get final postorder traversal
    while(s2.empty() == false){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}


// get size of the binary tree
// Time complexity :  O(n)
// Space complexity : O(h) -> h is height of the tree
int getsize(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return 1+ getsize(root->left) + getsize(root->right);
    }
}
// get height of the binary tree
// Time complexity :  O(n)
// Space complexity : O(h) -> h is height of the tree
int getheight(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return max( getheight(root->left), getheight(root->right)) + 1;
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
