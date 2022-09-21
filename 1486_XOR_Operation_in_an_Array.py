class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        lst=[]
        for i in range(n):
            lst.append(start+2*i)
        return reduce(lambda x, y: x ^ y, lst)
        
