class Solution {
public:
    int digitSum(int n){
        int sum=0;
        cout<<"Sum for "<<n;
        while(n>0){
            int lastDigit = n%10;
            sum+=lastDigit;
            n=n/10;
        }
        cout<<" "<<sum<<endl;
        return sum;
    }
    int minElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int min=23131321;
        while(s<=e){
            if(s==e){
                nums[s] = digitSum(nums[s]);
                 if(nums[s]<min){
                min=nums[s];
            }
            }
           else{
             nums[s] = digitSum(nums[s]);
            if(nums[s]<min){
                min=nums[s];
            }
            nums[e] = digitSum(nums[e]);
            if(nums[e]<min){
                min=nums[e];
            }
           }
            e--;
            s++;
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" "; 
        }
        return min;
    }
};