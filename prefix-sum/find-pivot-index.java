// import java.util.Scanner;
class Solution {
    public int pivotIndex(int[] nums) {
        // Scanner sc=new Scanner(System.in);
        int n=nums.length;
        int[] left_sum=new int[n];
        int[] right_sum=new int[n];
        for(int i=1;i<n;i++){
            int sum=left_sum[i-1]+nums[i-1];
            left_sum[i]=sum;
        }
        for(int i=n-1;i>0;i--){
            int sum=right_sum[i]+nums[i];
            right_sum[i-1]=sum;
        }
        for(int i=0;i<n;i++){
            if(left_sum[i]==right_sum[i])
                return i;
        }
        return -1;
    }
}