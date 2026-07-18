class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mapping={}
        alfabets='abcdefghijklmnopqrstuvwxyz'
        ind=0
        for i in key:
            if(i!=' ' and (i in mapping)==False):
                mapping[i]=alfabets[ind]
                ind+=1
        result=""
        for char in message:
            if(char!=' '):
                result+=mapping[char]
            else:
                result+=char
        return result
