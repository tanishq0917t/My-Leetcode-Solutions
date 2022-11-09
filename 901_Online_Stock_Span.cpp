class StockSpanner 
{
public:
    stack<pair<int,int>> stk;
    StockSpanner() 
    {
        
    }
    
    int next(int price) 
    {
        int count=0;
        while(!stk.empty() && stk.top().first<=price)
        {
            count+=stk.top().second;
            stk.pop();
        }
        count++;
        stk.push({price,count});
        return count;
    }
};
