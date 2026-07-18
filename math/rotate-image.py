class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        #Transpose
        row_size=len(matrix)
        col_size=len(matrix[0])
        for i in range(row_size):
            for j in range(i,col_size):
                matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
        #Reverse:
        for i,row in enumerate(matrix):
            matrix[i]=list(reversed(row))

        