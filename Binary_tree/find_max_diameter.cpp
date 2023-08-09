// largest path between any two node

// int height(node* root){
//     if(root == null){
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root -> right);
//     int ans = max(left , right) + 1;
//     return ans;
// }
// int diameter(node* root){
//     if(root == null){
//         return 0;
//     }
//     int option1 = diameter(root -> left);
//     int option12 = diameter(root -> right);
//     int option3 = height(root -> left ) + height(root -> right) + 1;
//     int ans = max(option1,option12,option3);
//     return ans;
// }

//0(n^2)


pair<int,int> diameterfast(node* root){
    if(root == null){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int>left = diameterfast(root->left);
    pair<int,int>right = diameterfast(root->right);
    int option1 = left.first;
    int option3 = left.first + left.second + 1;
    int option12 = left.second;
   int ans = max(option1,option12,option3);
    return ans;
}






