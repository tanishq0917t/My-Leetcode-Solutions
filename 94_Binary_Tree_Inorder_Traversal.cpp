class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int>v;
        helper(root,v);
        return v;
    }
    void helper(TreeNode *root,vector<int> &v)
    {
        if(root!=NULL)
        {
            if(root->left) helper(root->left,v);
            v.push_back(root->val);
            if(root->right) helper(root->right,v);
        }
    }
};
