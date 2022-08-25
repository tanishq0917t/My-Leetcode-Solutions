class Solution {
public:
    string defangIPaddr(string address) 
    {
        string a="";
        for(int e=0;e<address.length();e++)
        {
            if(address[e]!='.')a+=address[e];
            else
            {
                a+='[';
                a+=address[e];
                a+=']';
            }
        }
     return a;
    }
};
