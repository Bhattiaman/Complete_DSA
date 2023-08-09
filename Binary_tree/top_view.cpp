class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node* node=q.front().first;
            int x=q.front().second; 
            q.pop();
            if(m.find(x)==m.end()) m[x]=node->data;
            if(node->left!=NULL) q.push({node->left,x-1});
            if(node->right!=NULL) q.push({node->right,x+1});
        }
        for(auto it:m) ans.push_back(it.second);
        return ans;
    }

};
