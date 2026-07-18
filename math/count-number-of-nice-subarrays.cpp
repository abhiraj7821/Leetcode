class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if(goal<0){
            return 0;
        }
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                // ODD
                sum+=1;
            }
            while(sum>goal){
                if(nums[l]%2!=0){
                    // ODD L
                    sum-=1;
                }
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = solve(nums,k)-solve(nums,k-1);
        return ans;
    }
};