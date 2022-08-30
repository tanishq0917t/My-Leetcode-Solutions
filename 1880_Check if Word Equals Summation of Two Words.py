class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        a=""
        b=""
        c=""
        d={'a':0,'b':1,'c':2,'d':3,'e':4,'f':5,'g':6,'h':7,'i':8,'j':9}
        for i in range(len(firstWord)):
            a+=str(d[firstWord[i]])
        for i in range(len(secondWord)):
            b+=str(d[secondWord[i]])
        for i in range(len(targetWord)):
            c+=str(d[targetWord[i]])
        return int(a)+int(b)==int(c)
