// longest path between root and leaf node

// find first left side height and right side height then sum 1 for root node 
// max(leftheight, right_height) + 1
int height(node* root){
    if(root == null){
        return 0;
    }
    int left = height(root->left);
    int right = height(root -> right);
    int ans = max(left , right) + 1;
    return ans;
}