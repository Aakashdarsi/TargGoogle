void printNode_K_Dsit(Node *root, int k){
    if(root == NULL){
        return ;
    }
    if(k == 0){
        cout<<root->data<<" ";
    }
    else{
        printNode_K_Dsit(root->left,k-1);
        printNode_K_Dsit(root->right,k-1);
    }
}