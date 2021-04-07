class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool>v;
        int largest=candies[0];
        for(int e=1;e<candies.size();e++)
        {
            if(largest<candies[e]) largest=candies[e];
        }
        for(int e=0;e<candies.size();e++)
        {
            if(candies[e]+extraCandies>=largest) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
