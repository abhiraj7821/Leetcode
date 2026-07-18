class Solution:
    def createMapping(self,pattern):
        alfa='abcdefghijklmnopqrstuvwxyz'
        ind=0
        result_map={}
        for key in pattern:
            if((key in result_map)==False):
                result_map[key]=alfa[ind]
                ind+=1

        result_pattern=''
        for key in pattern:
            result_pattern+=result_map[key]

        return result_pattern

    def findAndReplacePattern(self, words: List[str], pattern: str) -> List[str]:
        pattern_mapping=self.createMapping(pattern)
        output_similar_patterns=[]
        for word in words:
            word_pattern=self.createMapping(word)
            if(word_pattern==pattern_mapping):
                output_similar_patterns.append(word)
        return output_similar_patterns