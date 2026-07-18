class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_string=str(x)
        s=0
        e=len(x_string)-1
        while(s<=e):
            if(x_string[s]!=x_string[e]):
                return False
            s+=1
            e-=1
        return True