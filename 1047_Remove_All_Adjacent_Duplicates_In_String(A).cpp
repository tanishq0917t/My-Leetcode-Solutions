class Solution {
public:
    string removeDuplicates(string s) 
    {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(str.empty()) str.push_back(s[i]);
            else
            {
                if(str[str.size()-1]==s[i]) str.pop_back();
                else str.push_back(s[i]);
            }    
        }
        return str;
    }
};
