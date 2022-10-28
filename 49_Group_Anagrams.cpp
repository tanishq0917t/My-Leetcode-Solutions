class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
       vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(auto&i: strs)
        {
            string t=i;
            sort(t.begin(),t.end());
            mp[t].push_back(i);
        }
        for(auto&i:mp) res.push_back(i.second);
        return res;
    }
};
