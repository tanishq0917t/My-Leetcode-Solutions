class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        a=coordinates[0]
        b=coordinates[1]
        if a=='a' or a=='c' or a=='e' or a=='g':
            if b=='1' or b=='3' or b=='5'or b=='7':
                return False
            else:
                return True
        else:
            if b=='1' or b=='3' or b=='5'or b=='7':
                return True
            else:
                return False
