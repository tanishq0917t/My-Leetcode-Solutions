class Solution:
    def reverseWords(self, s: str) -> str:
        lst=s.split()
        for i in range(len(lst)):
            lst[i]=lst[i][::-1]
        return ' '.join(lst)
