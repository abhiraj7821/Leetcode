class Solution {
public:
    int search(vector<int>& nums,int target,int s,int e){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target)
                return mid;
            else
            if(target>nums[mid])
                s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        set<pair<int,int>>ans;
        while(i<nums.size()){
            int difEle=k+nums[i];
            int difPos=search(nums,difEle,i+1,nums.size()-1);
            if(difPos!=-1)
                 ans.insert({nums[i],nums[difPos]});
            i++;
        }
        return ans.size();
    }
};