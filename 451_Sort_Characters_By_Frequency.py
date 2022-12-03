from collections import Counter
class Solution:
    def frequencySort(self, s: str) -> str:
        a=Counter(s).most_common()
        #print(a)
        ans=""
        for i in a:
            ans+=i[0]*i[1]
        return ans
