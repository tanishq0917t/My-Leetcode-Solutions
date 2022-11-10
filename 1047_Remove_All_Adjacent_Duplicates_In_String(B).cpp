class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char>stk;
        for(int e=0;e<s.length();e++)
        {
            if(stk.empty()) stk.push(s[e]);
            else if(s[e]==stk.top()) stk.pop();
            else stk.push(s[e]);
        }
        string m="";
        while(!stk.empty())
        {
            m+=stk.top();
            stk.pop();
        }
        reverse(m.begin(),m.end());
        return m;
    }
};
