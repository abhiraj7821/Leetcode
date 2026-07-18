class Solution {
public:
    void reverseArray(vector<int>& nums,int s, int e){
        while(s<=e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        // STEP1->find the break point
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i-1;
                break;
            }
        }
        // If index==-1 we are at the last permutation;
        if(index==-1){
            reverseArray(nums,0,nums.size()-1);
            return;
        }
        // STEP2->find the element which is exactly smaller then nums[index];
        for(int i=nums.size()-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        // Sort the remaing from index+1 to n-1 to get the closest posible permutation
        // Or Just reverse the array from index+1 to n-1;
        int s=index+1;
        int e=nums.size()-1;
        while(s<=e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
};