class Solution:
    def romanToInt(self, s: str) -> int:
        maps={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        value=0
        start=0
        end=1
        print("len of s=",len(s))
        while(end<len(s)):
            print("end=",end)
            print("value=",value)
            if(s[start:end+1]=="IV"):
                value=value+4
                start=start+2
                end=end+2
            elif(s[start:end+1]=="IX"):
                value=value+9
                start=start+2
                end=end+2
            elif(s[start:end+1]=="XL"):
                value=value+40
                start=start+2
                end=end+2
            elif(s[start:end+1]=="XC"):
                value=value+90
                start=start+2
                end=end+2
            elif(s[start:end+1]=="CD"):
                value=value+400
                start=start+2
                end=end+2
            elif(s[start:end+1]=="CM"):
                value=value+900
                start=start+2
                end=end+2
            else:
                value=value+maps[s[start]]
                start=start+1
                end=end+1
        if(start==len(s)-1):
            value=value+maps[s[start]]
        return value

