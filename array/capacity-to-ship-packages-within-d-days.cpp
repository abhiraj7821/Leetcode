class Solution {
public:

    int posibleSol(vector<int>& weights,int days,int maxWeight){
        int currWeight=0;
        int weightNo=1;
        for(int i=0;i<weights.size();i++){
            if(maxWeight<weights[i])
        		return false;
            if(currWeight+weights[i]<=maxWeight){
                currWeight+=weights[i];
            }
            else{
                weightNo++;
                currWeight=weights[i];
                if(weightNo>days)
                	return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int e=accumulate(weights.begin(), weights.end(), 0);
        int s=0;
        int ans=0;
        while(s<=e){
        	int mid=s+(e-s)/2;
            if(posibleSol(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return ans;
    }
};