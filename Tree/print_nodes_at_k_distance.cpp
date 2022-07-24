void printNodeatKDist(Node *root,int k){
    if(root == NULL){
        return ;
    }
    if(k == 0){
        cout<<root->data<<" ";
    }
    else{
        printNodeatKDist(root->left,k-1);
        printNodeatKDist(root->right,k-1);
    }
}