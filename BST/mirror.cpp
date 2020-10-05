/* Time : O(N) because we are just traversing throught the tree
(1)  Call Mirror for left-subtree    i.e., Mirror(left-subtree)
(2)  Call Mirror for right-subtree  i.e., Mirror(right-subtree)
(3)  Swap left and right subtrees.
          temp = left-subtree
          left-subtree = right-subtree
          right-subtree = temp
*/

void mirror(Node* root){
    if(root != NULL){
      mirror(root->left);
      mirror(root->right);
      Node* temp = root->left;
      root->left = root->right;
      root->right = temp;
    }    
    
}