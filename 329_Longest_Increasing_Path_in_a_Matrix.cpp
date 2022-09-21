class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return 0;
        
        vector<vector<int>> memo(matrix.size(), vector<int>(matrix[0].size(), 0));
        
        int ans = 1;
        
        for (int i=0; i<matrix.size(); i++)
            for (int j=0; j<matrix[0].size(); j++)
               ans = max(ans, helper(matrix, memo, i, j, INT_MIN));
        
        return ans;
    }
    
    int helper (vector<vector<int>>& matrix, vector<vector<int>>& memo, int i, int j, int prev) {
        if (i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || prev>=matrix[i][j])
            return 0;
        
        if (memo[i][j] != 0)
            return memo[i][j];
        
        int maxPath = 1;
        maxPath = max(maxPath, helper(matrix, memo, i+1, j, matrix[i][j])+1);
        maxPath = max(maxPath, helper(matrix, memo, i-1, j, matrix[i][j])+1);
        maxPath = max(maxPath, helper(matrix, memo, i, j+1, matrix[i][j])+1);
        maxPath = max(maxPath, helper(matrix, memo, i, j-1, matrix[i][j])+1);
        
        memo[i][j] = maxPath;
        
        return maxPath;
    }
};
