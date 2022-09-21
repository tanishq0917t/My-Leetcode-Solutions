class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int ee;
        for(int e=0;e<matrix.size();e++)
        {
            for(int f=e+1;f<matrix[e].size();f++)
            {
                ee=matrix[e][f];
                matrix[e][f]=matrix[f][e];
                matrix[f][e]=ee;
            }
        }
        for(int e=0;e<matrix.size();e++)
        {
            reverse(matrix[e].begin(),matrix[e].end());
        }
    }
};
