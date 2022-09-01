class Solution
{
public:
    int cc = 0;
    void dfs(TreeNode* root, int maxSoFar)
    {
        if(root)
        {
            if(root->val >= maxSoFar) cc++;
            dfs(root->left, max(maxSoFar,root->val));
            dfs(root->right, max(maxSoFar,root->val));
        }
    }
    int goodNodes(TreeNode* root)
    {
        dfs(root, INT_MIN);
        return cc;
    }
};
