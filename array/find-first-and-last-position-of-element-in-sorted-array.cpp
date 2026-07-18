class Solution {
public:
    int leftOccur(vector<int> nums,int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                // Target is small
                e=mid-1;
            }
            else if(nums[mid]<target){
                // Target is big
                s=mid+1;
            }
        }
        return ans;
    }
    int rightOccur(vector<int> nums,int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                // Target is small
                e=mid-1;
            }
            else if(nums[mid]<target){
                // Target is big
                s=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int left=leftOccur(nums,target);
        int right=rightOccur(nums,target);
        vector<int> ans={left,right};
        return ans;
    }
};