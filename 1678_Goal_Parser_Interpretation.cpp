class Solution {
public:
    string interpret(string command) 
    {
        string a;
        for(int e=0;e<command.length();e++)
        {
            if(command[e]=='G')a+=command[e];
            if(command[e]=='(' && command[e+1]==')')a+='o';
            if(command[e]=='(' && command[e+1]=='a')
            {
                a+='a';
                a+='l';
            }
        }
        return a;
    }
};
