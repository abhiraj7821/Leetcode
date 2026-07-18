class Solution {
public:
    void sortColors(vector<int>& nums) {
        // brute force: Just sort the array.
        // Better: count the number of 0, 1 and 2 and fill it back to the orignal array.

        // int zCount = 0;
        // int oCount = 0;
        // int tCount = 0;
        // for(int i=0; i<nums.size();i++){
        //     if(nums[i]==0){
        //         zCount++;
        //     }
        //     else if(nums[i]==1){
        //         oCount++;
        //     }
        //     else if(nums[i]==2){
        //         tCount++;
        //     }
        // }
        // int index=0;
        // for(int i=0;i<zCount;i++){
        //     nums[index]=0;
        //     index++;
        // }
        // for(int i=0;i<oCount;i++){
        //     nums[index]=1;
        //     index++;
        // }
        // for(int i=0;i<tCount;i++){
        //     nums[index]=2;
        //     index++;
        // }

        // Dutch Flag Algo.

        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while(mid<=high){
            // element is 2
            if(nums[mid]==0){
                // swap nums[mid], nums[low]
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            // element is 1
            else if(nums[mid]==1){
                mid++;
            }
            // element is 2
            else if(nums[mid]==2){
                // swap nums[mid], nums[high]
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};