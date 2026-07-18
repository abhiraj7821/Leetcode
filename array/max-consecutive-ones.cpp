class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0;
        int e=0;
        int maxi = 0;
        while(e<nums.size()){
            if(nums[e]==1){
                maxi = max(maxi,(e-s+1));
                e++;
            }
            else{
                s=e+1;
                e++;
            }
        }
        return maxi;
    }
};