class Solution 
{
public:
    void solve(TreeNode *root,vector<int> &v,int level)
    {
        if(!root) return;
        if(v.size()<level+1)
        {
            v.push_back(root->val);
        }
        else
        {
            if(root->val>v[level]) v[level]=root->val;
        }
        solve(root->left,v,level+1);
        solve(root->right,v,level+1);
    }
    vector<int> largestValues(TreeNode* root) 
    {
        vector<int> v;
        if(root==NULL) return v;
        v.push_back(root->val);
        solve(root,v,0);
        return v;
    }
};
