class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char,int> mp;
        for(char e:magazine)mp[e]++;
        for(char e:ransomNote)
        {
            if(--mp[e]<0) return false;
        }
        return true;
    }
};
