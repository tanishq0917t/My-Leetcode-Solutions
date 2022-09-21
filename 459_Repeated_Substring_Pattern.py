class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        l = len(s)
        for i in range(len(s)//2):
            ss = s[:i+1]
            if ss*(l//len(ss))==s: return True
        return False
