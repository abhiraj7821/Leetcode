class Solution:
    def expand(self,s,i,j):
        count=0
        while(i>=0 and j<len(s) and s[i]==s[j]):
            count+=1
            i-=1
            j+=1
        return count

    def countSubstrings(self, s: str) -> int:
        total_count=0
        for curr in range(0,len(s)):
            # odd
            odd_cunt=self.expand(s,curr,curr)
            #even
            even_cunt=self.expand(s,curr,curr+1)
            total_count=total_count+odd_cunt+even_cunt
        return total_count