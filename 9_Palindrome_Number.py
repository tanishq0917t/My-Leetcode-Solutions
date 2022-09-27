class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=str(x)
        a=a[::-1]
        if a==str(x): return True
        else: return False
        
