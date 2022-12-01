class Solution 
{
public:
    bool halvesAreAlike(string s) 
    {
        int e=0;
        int f=s.length()/2;
        int a=0,b=0;
        while(f<s.length())
        {
            if(s[e]=='a' || s[e]=='A' || s[e]=='e' || s[e]=='E' || s[e]=='i' || s[e]=='I' ||
            s[e]=='O' || s[e]=='o' || s[e]=='u' || s[e]=='U') a++;
            if(s[f]=='a' || s[f]=='A' || s[f]=='e' || s[f]=='E' || s[f]=='i' || s[f]=='I' ||
            s[f]=='O' || s[f]=='o' || s[f]=='u' || s[f]=='U') b++;
            e++;
            f++;
        }
        return a==b;
    }
};
