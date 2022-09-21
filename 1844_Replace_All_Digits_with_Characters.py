class Solution:
    def replaceDigits(self, s: str) -> str:
        a=""
        for i in range(len(s)):
            if s[i].isnumeric():
                a+=chr(ord(s[i-1])+int(s[i]))
            else:
                a+=s[i]
        return a
                
