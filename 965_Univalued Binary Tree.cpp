class Solution 
{
public:
    int v;
    bool ans=true;
    void traverse(TreeNode *root)
    {
        if(!root) return;
        traverse(root->left);
        if(v!=root->val) ans= false;
        traverse(root->right);
    }
    bool isUnivalTree(TreeNode* root) 
    {
        v=root->val;
        traverse(root);
        return ans;
    }
};
