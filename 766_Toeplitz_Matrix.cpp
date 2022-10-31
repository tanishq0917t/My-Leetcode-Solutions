class Solution 
{
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        for(int e=0;e<matrix.size()-1;e++)
        {
            for(int ee=0;ee<matrix[0].size()-1;ee++)
            {
                if(matrix[e][ee]!=matrix[e+1][ee+1]) return false;
            }
        }
        return true;
    }
};
