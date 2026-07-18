class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int lSum=0;
        int rSum=0;
        int maxSum=sum;
        lSum=sum;
        int l=0;
        int r=k-1;
        int rIndex=cardPoints.size()-1;

        while(r>=l){
            lSum = lSum-cardPoints[r];
            rSum = rSum+cardPoints[rIndex];
            rIndex--;
            r--;
            maxSum=max(maxSum,(lSum+rSum));
        }
        return maxSum;
    }
};