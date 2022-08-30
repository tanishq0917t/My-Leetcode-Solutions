class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        count=0
        for lst in grid:
            i=len(lst)-1
            #print(i)
            while i>=0:
                #print(lst[i])
                if lst[i]>=0:break
                count+=1
                i-=1
        return count
        
