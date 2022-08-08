class Solution 
{
public:
    TreeNode *prev=NULL;
    int diff=INT_MAX;
    void dfs(TreeNode *root)
    {
        if(root->left) dfs(root->left);
        if(prev) diff=min(diff,abs(prev->val-root->val));
        prev=root;
        if(root->right) dfs(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        dfs(root);
        return diff;
    }
};
