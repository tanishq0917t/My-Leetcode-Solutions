class Solution 
{
public:
    int maxPathSum(TreeNode* root) 
    {
        int maxx=INT_MIN;
        maxSum(root,maxx);
        return maxx;
    }
    int maxSum(TreeNode *node,int &maxx)
    {
        if(!node) return 0;
        int left=max(0,maxSum(node->left,maxx));
        int right=max(0,maxSum(node->right,maxx));
        maxx=max(maxx,left+right+node->val);
        return max(left,right)+node->val;
    }
};
