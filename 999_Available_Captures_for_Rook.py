class Solution:
    def numRookCaptures(self, board: List[List[str]]) -> int:
        pos=[-1,-1]
        count=0
        for i in range(len(board)):
            if "R" in board[i]:
                pos=[i,board[i].index("R")]
                break
        a,b=pos
        while a>=0:
            if board[a][b]=="p":
                count+=1
                break
            elif board[a][b]=="B":
                break
            a-=1
        a,b=pos
        while a<=7:
            if board[a][b]=="p":
                count+=1
                break
            elif board[a][b]=="B":
                break
            a+=1
        a,b=pos
        while b<=7:
            if board[a][b]=="p":
                count+=1
                break
            elif board[a][b]=="B":
                break
            b+=1
        a,b=pos
        while b>=0:
            if board[a][b]=="p":
                count+=1
                break
            elif board[a][b]=="B":
                break
            b-=1
        return count
