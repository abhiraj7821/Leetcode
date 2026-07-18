class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        s_list=list(s)
        start=0
        end=len(s)-1
        while(start<=end):
            if(s_list[start].isalpha() and s_list[end].isalpha()):
                # both are alphabet
                # Swap
                s_list[start],s_list[end]=s_list[end],s_list[start]
                start+=1
                end-=1
            elif(s_list[start].isalpha()==False):
                #not a alpha
                start+=1
            elif(s_list[end].isalpha()==False):
                # not a alpha
                end-=1
        return ''.join(s_list)