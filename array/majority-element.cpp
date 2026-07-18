class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Better Approch -> use hashmap and store all the elements occurence.
        // Optimal Approch 
        int el;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
            }
            // if its the same element
            if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        return el;
        // int elCount=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==el){
        //         elCount++;
        //     }
        // }
        // if(elCount>(nums.size()/2)){
        //     return el;
        // }
        // else{
        //     return -1;
        // }
    }
};