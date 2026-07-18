class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        // i go from 0->nums.size()
        for(int i=0;i<nums.size();i++){
            // i should not be the same as the prev element
            if( i>0 && nums[i]==nums[i-1]){
                continue;
            }
            // j goes from i+1 to nums.size();
            for(int j=i+1;j<nums.size();j++){
                // move j if its equal to its prev nums[j] value;
                if( j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        // move k while its value is equal to its prev value
                        while(nums[k]==nums[k-1] && k<nums.size()-1) k++;
                        // move l while its value is equal to its prev value
                        while(nums[l]==nums[l+1] && l>0) l--;
                    }
                    else if(sum>target) l--;
                    else if(sum<target) k++;
                }
            }
        }
        return ans;
    }
};