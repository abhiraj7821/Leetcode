class Solution:
    def removeDuplicates(self, s: str) -> str:
        # Approch-1
        # result=""
        # index=0
        # while(index<len(s)):
        #     if(len(result)>0 and result[-1]==s[index]):
        #         result=result[:-1]
        #     else:
        #         result+=s[index]
        #     index+=1
        # return result

        #Approch2
        stack=[]
        for char in s:
            if(stack and stack[-1]==char):
                stack.pop()
            else:
                stack.append(char)
        
        return "".join(stack)