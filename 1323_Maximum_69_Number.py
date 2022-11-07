class Solution:
    def maximum69Number (self, n: int) -> int:
        n=str(n)
        a=n.find('6')
        if a==-1: return int(n)
        return int(n[0:a]+'9'+n[a+1:])
