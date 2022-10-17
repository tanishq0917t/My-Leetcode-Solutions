class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        senence=sentence.replace(" ","")
        return len(set(sentence))==26
