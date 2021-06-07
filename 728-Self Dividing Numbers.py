class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        lst=[]
        while left<=right:
            if left<=9: 
                lst.append(left)
            else:
                a=str(left)
                flag=0
                for i in a:
                    if int(i)==0:
                        flag=1
                        break
                    if left%int(i)!=0:
                        flag=1
                        break
                if flag==0:lst.append(left)
            left+=1
        return lst
        
