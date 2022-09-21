class Solution 
{
public:
    bool help(TreeNode *node)
    {
        if(!node->left && !node->right)
        {
            if(node->val) return true;
            return false;
        }
        if(node->val==2) return help(node->left) || help(node->right);
        return help(node->left) && help(node->right);
    }
    bool evaluateTree(TreeNode* root) 
    {
        return help(root);
    }
};
