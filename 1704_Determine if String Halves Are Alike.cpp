class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int count1=0,count2=0;
        int k=s.length()/2;
        for(int e=0;e<k;e++)
        {
            if(s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u')count1++;
            if(s[e]=='A' || s[e]=='E' || s[e]=='I' || s[e]=='O' || s[e]=='U')count1++;
        }
        for(int e=k;e<s.length();e++)
        {
            if(s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u')count2++;
            if(s[e]=='A' || s[e]=='E' || s[e]=='I' || s[e]=='O' || s[e]=='U')count2++;
        }
        return count1==count2;
    }
};
