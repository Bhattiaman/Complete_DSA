int noOfleafNode(BinarytreeNode<int> *root){
    int count = 0;
    inorder(root,count);
    return count;

}

void inorder(BinarytreeNode<int> *root,int count){
    //base case
    if(root == NULL){
        return ;
    }
    inorder(root ->left,count);
    //leaf condition
    if(root -> left == NULL && root == NULL{
        count++;
    })
    inorder(root -> right,count);
}