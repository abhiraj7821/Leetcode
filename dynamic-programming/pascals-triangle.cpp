class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int index=1;index<=numRows;index++){
            // Current Ans to get the current row elements
            vector<int> currAns;
            // get all the elements present in the current row;
            currAns.push_back(1);
            int ele=1;
            for(int i=1;i<index;i++){
                ele=ele*(index-i);
                ele=ele/i;
                currAns.push_back(ele);
            }
            // Push the current ans to final ans;
            ans.push_back(currAns);
        }
        return ans;
    }
};