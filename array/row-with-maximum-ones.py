import sys
class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        row_with_max_ones=0
        row=0
        for i in range(len(mat)):
            max_ones_curr_row=0
            for j in range(len(mat[0])):
                if(mat[i][j]==1):
                    max_ones_curr_row+=1
            if(max_ones_curr_row>row_with_max_ones):
                row=i
                row_with_max_ones=max_ones_curr_row
        
        return [row,row_with_max_ones] 