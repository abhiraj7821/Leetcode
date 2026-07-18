class Solution:
    
    def checkPalindrome(self,str,s,e):
        while(s<=e):
            if(str[s]!=str[e]):
                return False
            s+=1
            e-=1
        return True

    def validPalindrome(self, s: str) -> bool:
        i=0
        j=len(s)-1
        while(i<=j):
            # Same s[i] and s[j]
            if(s[i]==s[j]):
                i+=1
                j-=1
            else:
                #Remove ith ele
                ans1=self.checkPalindrome(s,i+1,j)
                ans2=self.checkPalindrome(s,i,j-1)
                print("Ans1",ans1)
                print("Ans2",ans2)
                return (ans1 or ans2)

        # Valid Palindrome->0 Removal
        return True