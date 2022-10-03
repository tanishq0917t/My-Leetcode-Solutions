class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        count=0
        a=0
        if(len(s)<3): return 0
        for i in range(len(s)-2):
            if len(s[a:a+3])==len(set(s[a:a+3])): count+=1
            a+=1
        return count
