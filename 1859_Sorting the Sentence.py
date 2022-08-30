class Solution:
    def sortSentence(self, s: str) -> str:
        d={}
        marker=0
        for i in range(len(s)):
            if s[i]==' ':
                pos=int(s[i-1])
                d[pos]=s[marker:i-1]
                marker=i+1
            if i==len(s)-1:
                pos=int(s[i])
                d[pos]=s[marker:i]
                marker=i+1
        lst=sorted(d.keys())
        a=""
        for i in lst:
            a+=d[i]
            if i!=len(d): a+=' '
        return a
            
