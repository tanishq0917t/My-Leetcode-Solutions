class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        p=[]
        for i in accounts:
            p.append(sum(i))
        a=sorted(p)
        return a[len(p)-1]
        
