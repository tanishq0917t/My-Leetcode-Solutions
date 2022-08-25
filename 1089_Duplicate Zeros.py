class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        lst=[]
        for i in range(len(arr)):
            if arr[i]!=0:
                lst.append(arr[i])
            else:
                lst.append(0)
                lst.append(0)
        for i in range(len(arr)):
            arr[i]=lst[i]
        
