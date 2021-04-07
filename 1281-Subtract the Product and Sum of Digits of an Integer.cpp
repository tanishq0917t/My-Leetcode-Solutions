class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int num=n,sum=0;
        while(num>0)
        {
            sum+=num%10;
            num=num/10;
        }
        int prd=1;
        num=n;
        while(num>0)
        {
            prd*=num%10;
            num=num/10;
        }
        return prd-sum;
    }
};
