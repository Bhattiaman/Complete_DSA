// int height(node* root){
//     if(root == null){
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root -> right);
//     int ans = max(left , right) + 1;
//     return ans;
// }

// bool isbalanced(node* root){
//     if(root == null){
//         return true;
//     }
//     bool left = isbalanced(root-> left );
//     bool right = isbalanced(root -> right);
//     bool diff = abs(height(root->leaf) = height(root -> right)) <= 1;
//     if(left && right && diff){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// //0(n^2)

//optimize

pair<bool,int> solve(BinaryTreeNode<int>* root){

    if(root == nullptr){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    pair<bool,int> left = solve(root->left);
    pair<bool,int> right = solve(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool,int> ans;
    if(leftAns && rightAns && diff)
    {
        ans.first = true;
    }
    else{
        ans.first=false;
    } 
    ans.second = max(left.second , right.second)+1;
    return ans;

}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    return solve(root).first;
}