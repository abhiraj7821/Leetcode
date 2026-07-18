#include<set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen=0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int x:s){
            // is x-1 is present in set??
            // YES
            int flag=true;
            if(s.count(x-1)){
            }
            else{
                int len=1;
                while(flag){
                    maxLen=max(maxLen,len);
                    x=x+1;
                    if(s.count(x)){
                        len++;
                    }else{
                        flag=false;
                    }
                }
            }
        }
        return maxLen;
    }
};