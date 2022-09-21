class Solution
{
public:
    int findTilt(TreeNode* root)
    {
        int res = 0;
        recursive(root, res);
        return res;
    }
    int recursive(TreeNode* root, int& res)
    {
        if (root == nullptr) return 0;
        int left = recursive(root->left, res);
        int right = recursive(root->right, res);
        res += abs(left - right);
        return left + right + root->val;
    }
};
