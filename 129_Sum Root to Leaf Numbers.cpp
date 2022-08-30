class Solution 
{
public:
    int solve(TreeNode *root,int val)
    {
        if(!root) return 0;
        val=val*10+root->val;
        if(!root->left && !root->right)
        {
            return val;
        }
        return solve(root->left,val) + solve(root->right,val);
    }
    int sumNumbers(TreeNode* root) 
    {
        return solve(root,0);
    }
};
