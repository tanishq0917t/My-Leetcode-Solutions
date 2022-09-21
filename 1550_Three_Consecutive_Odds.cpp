class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        if(arr.size()<3) return false;
        for(int e=0;e<arr.size()-2;e++)
        {
            if(arr[e]%2 && arr[e+1]%2 && arr[e+2]%2)return true;
        }
        return false;
    }
};
