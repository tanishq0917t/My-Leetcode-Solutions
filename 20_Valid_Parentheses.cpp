class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stk;
        char m;
        bool ans=true;
        for(int e=0;e<s.size();e++)
        {
            if(s[e]=='(' or s[e]=='[' or s[e]=='{') stk.push(s[e]);
            else if(s[e]==')')
            {
                if(!stk.empty() && stk.top()=='(') stk.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(s[e]=='}')
            {
                if(!stk.empty() && stk.top()=='{') stk.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(s[e]==']')
            {
                if(!stk.empty() && stk.top()=='[') stk.pop();
                else
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans && stk.empty()) return true;
        return false;
    }
};
