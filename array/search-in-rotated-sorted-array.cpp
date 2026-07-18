class Solution {
public:

    int binarySearch(vector<int>& nums,int target,int s,int e){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        return -1;
    }

    int pivotIndexFind(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(mid+1<nums.size() &&nums[mid]>nums[mid+1])
                return mid;
            if(mid-1>=0 && nums[mid-1]>nums[mid])
                return mid-1;
            if(nums[s]>=nums[mid])
                e=mid-1;
            else
                s=mid;
            mid=s+(e-s)/2;   
        }
        return s;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex=pivotIndexFind(nums);
        if(target>=nums[0] && target<=nums[pivotIndex]){
            //search in array a
            int ans=binarySearch(nums,target,0,pivotIndex);
            return ans;
        }
        if(pivotIndex+1 < nums.size() && target>=nums[pivotIndex+1]&& target<=nums[nums.size()-1]){
            //search in array b
            int ans=binarySearch(nums,target,pivotIndex+1,nums.size()-1);
            return ans;
        }
        return -1;
    }
};