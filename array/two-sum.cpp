#include<map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ele;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int req = target-nums[i];
            // is the req is there?
            if(ele.find(req)!=ele.end()){
                ans.push_back(ele.at(req));
                ans.push_back(i);
                return ans;
            }
            else{
                ele.insert({nums[i],i});
            }
        }
        return ans;
    }
};