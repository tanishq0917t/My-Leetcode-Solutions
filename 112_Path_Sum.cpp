class Solution
{
public:
    bool hasPathSum(TreeNode* root, int target)
    {
        if(!root) return false;
        else if(!root->left && !root->right && target-(root->val)==0) return true;
        return hasPathSum(root->left,target-root->val) || hasPathSum(root->right,target-root->val);
    }
};
