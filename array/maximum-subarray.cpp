class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=0;
        int r=0;
        int maxSum=INT_MIN;
        int sum=0;
        if(nums.size()==1){
            return nums[0];
        }
        while(r<nums.size() && l<nums.size()){
            sum = sum+nums[r];
            // Sum is positive
            if(sum>0){
                r++;
                maxSum = max(maxSum,sum);
            }
            // Sum is negative
            else{
                maxSum = max(maxSum,sum);
                l=r+1;
                r++;
                sum=0;
            }
        }
        return maxSum;
    }
};