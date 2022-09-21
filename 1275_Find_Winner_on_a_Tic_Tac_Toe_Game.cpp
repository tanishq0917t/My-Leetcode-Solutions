class Solution
{
public:
    string tictactoe(vector<vector<int>>& moves)
    {
        vector<vector<string>> res(3, vector<string> (3,""));
        for(int e=0;e<moves.size();e++)
        {
            if(e%2)
            {
                res[moves[e][0]][moves[e][1]]="O";
            }
            else
            {
                res[moves[e][0]][moves[e][1]]="X";
            }
        }
        /*
            for(int e=0;e<3;e++)
            {
                for(int f=0;f<3;f++)
                {
                    cout<<res[e][f]<<" ";
                }
                cout<<endl;
            }
        */
        if(res[0][0]==res[0][1] && res[0][1]==res[0][2])
        {
            //cout<<1<<endl;
            if(res[0][0]=="X") return "A";
            if(res[0][0]=="O") return "B";
        }
        if(res[1][0]==res[1][1] && res[1][1]==res[1][2])
        {
            //cout<<2<<endl;
            if(res[1][0]=="X") return "A";
            if(res[1][0]=="O") return "B";
        }
        if(res[2][0]==res[2][1] && res[2][1]==res[2][2])
        {
            //cout<<3<<endl;
            if(res[2][0]=="X") return "A";
            if(res[2][0]=="O") return "B";
        }
        
        
        
        if(res[0][0]==res[1][0] && res[1][0]==res[2][0])
        {
            //cout<<4<<endl;
            if(res[0][0]=="X") return "A";
            if(res[0][0]=="O") return "B";
        }
        if(res[0][1]==res[1][1] && res[1][1]==res[2][1])
        {
            //cout<<5<<endl;
            if(res[0][1]=="X") return "A";
            if(res[0][1]=="O") return "B";
        }
        if(res[0][2]==res[1][2] && res[1][2]==res[2][2])
        {
            //cout<<6<<endl;
            if(res[0][2]=="X") return "A";
            if(res[0][2]=="O") return "B";
        }
        
        
        
        if(res[0][0]==res[1][1] && res[1][1]==res[2][2])
        {
            //cout<<7<<endl;
            if(res[0][0]=="X") return "A";
            if(res[0][0]=="O") return "B";
        }
        if(res[0][2]==res[1][1] && res[1][1]==res[2][0])
        {
            //cout<<8<<endl;
            if(res[0][2]=="X") return "A";
            if(res[0][2]=="O") return "B";
        }
        if(moves.size()==9) return "Draw";
        return "Pending";
    }
};
