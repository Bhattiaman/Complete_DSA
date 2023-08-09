class Solution {
public:

    int findPosition(vector<int> &inorder,int element,int n){
        for(int i = 0; i< n; i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &index,int  inorderStart, int inorderEnd,int n){
        //base case
        if( index >= n || inorderStart > inorderEnd){
            return NULL;
        }
        int element = preorder[index];
        TreeNode* temp = new TreeNode(element);
        int position = findPosition(inorder,element, n);

        // recusive call
        temp -> left = solve(preorder,inorder,index,inorderStart,position-1,n);
        temp -> right = solve(preorder,inorder,index,position + 1,inorderEnd,n);\

        return temp;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size() ;
        int preOrderIndex = 0;
        TreeNode* ans = solve(preorder,inorder,preOrderIndex,0,n-1,n);
        return ans;
    }
};