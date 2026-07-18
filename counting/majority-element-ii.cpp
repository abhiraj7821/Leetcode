class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=-1;
        int el2=-1;
        int count1=0;
        int count2=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if( count1==0 && nums[i]!=el2){
                el1=nums[i];
                count1=1;
            }
            else if( count2==0 && nums[i]!=el1){
                el2=nums[i];
                count2=1;
            } 
            else if(nums[i]==el1) count1++;
            else if(nums[i]==el2) count2++;
            else {
                count1--;
                count2--;
            }
        }
        int el1Count=0, el2Count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1){
                el1Count++;
            }
            else if(nums[i]==el2){
                el2Count++;
            }
        }
        if(el1Count>nums.size()/3){
            ans.push_back(el1);
        }
        if(el2Count>nums.size()/3){
            ans.push_back(el2);
        }
        return ans;
    }
};