class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        set<int> s;
        
        return search(root, k, s);
    }
    bool search(TreeNode* root,int k, set<int> &s){
        if (!root){
            return false;
        }
        int val = root->val;
        
        if(s.find(k-val) != s.end()){
            return true;
        }
        s.insert(val);
        bool l = search(root->left, k, s);
        bool r = search(root->right, k, s);
        
        return l || r;
    }
};
