class Solution {
public:

    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int m=0;
        int h=nums.size()-1;

        while(m<=h){
            if(nums[m]==val){
                swap(&nums[m],&nums[h]);
                h--;
            }
            else{
                m++;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)
                count++;
            else
                break;
        }
        return count;
    }
};