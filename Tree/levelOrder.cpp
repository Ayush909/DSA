void levelOrder(Node* root){
    Node* temp;
    queue<Node*> q;
    temp = root;
    while(temp != NULL){
        cout<<temp->key<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        temp = q.front();
        q.pop();
    }
}

/* 1) Create an empty queue
   2) temp = root
   3) run while(temp != NULL)
    a) print temp->key
    b) enqueue left and then right child of temp (if not NULL)
    c) dequeue front element from queue and temp = queue.front()
*/