class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int starting_row=0;
        int starting_col=col-1;
        
        while(starting_row<row && starting_col>=0){
            if(matrix[starting_row][starting_col]==target){
                return 1;
            }
            else
                if(matrix[starting_row][starting_col]>target){
                    starting_col--;
                }
            else
                if(matrix[starting_row][starting_col]<target){
                    starting_row++;
                }
        }
        return 0;
    }
};