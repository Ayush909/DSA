//hd = horizontal distance
// decrease hd by -1 on going left
// increase hd by +1 on going right
//TIME : O(nlog(hd) + hd)

void verticalSumUtil(Node *root, int hd, map<int,int> &mp){
    if(root == NULL ){
        return ;
    }
    verticalSumUtil(root->left,hd-1,mp);
    mp[hd] += root->data;
    verticalSumUtil(root->right,hd+1,mp);
}

void verticalSum(Node* root){
    map<int,int> mp;
    verticalSumUtil(root,0,mp);
    for(auto x : mp){
        cout<<x.second<<" ";
    }
}