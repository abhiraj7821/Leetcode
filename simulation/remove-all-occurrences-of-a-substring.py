class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        # print(s.find(part))
        while(s.find(part)!=-1):
            s=s.replace(part,"",1)
        return s