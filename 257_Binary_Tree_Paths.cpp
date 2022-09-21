class Solution 
{
public:
    void solve(vector<string> &v,TreeNode *root,string s)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
            s+=to_string(root->val);
            v.push_back(s);
            return;
        }
        s+=to_string(root->val);
        s+="->";
        solve(v,root->left,s);
        solve(v,root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> v;
        if(!root) return v;
        solve(v,root,"");
        return v;
    }
};
