class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans(n);
        int s = 1, l = k + 1;
        for(int i = 0; i < k + 1; ++i){
            ans[i] = i % 2 ? l-- : s++;
        }
        for(int i = k + 1; i < n; ++i){
            ans[i] = i + 1;
        }
        return ans;
    }
};
