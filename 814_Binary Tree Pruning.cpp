class Solution
{
public:
    TreeNode* pruneTree(TreeNode* root)
    {
        if(root!=NULL)
        {
            root->left = pruneTree(root->left); //Assigning the value to left child as NULL if that is leaf node and value 0 else let it be as it is
            root->right = pruneTree(root->right);
            if(!root->left && !root->right && root->val==0) // This case means the leaf Node has value = 0 so that should be put as NULL
	    {
		return NULL;
            }
        return root;
    }
};
