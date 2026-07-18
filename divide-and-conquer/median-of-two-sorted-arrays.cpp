class Solution {
private:
double findMid(vector<int> sort){
       if(sort.size()%2==0){
           //even
           double sum=sort[sort.size()/2]+sort[(sort.size()/2)-1];
           double ans=sum/2;
           return ans;
       }
        else{
            double ans=sort[sort.size()/2];
            return ans;
        }
    }
    
    void merge(vector<int>& nums1, vector<int>& nums2,vector<int>& sort){
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                sort.push_back(nums1[i]);
                i++;
                continue;
            }    
            else
                sort.push_back(nums2[j]);
                j++;
                continue;
        }
        while(i<nums1.size()){
        		sort.push_back(nums1[i]);
                i++;
        }
        while(j<nums2.size()){
        		sort.push_back(nums2[j]);
                j++;
        }
    }
    
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        vector<int> sortedArray;
        merge(nums1,nums2,sortedArray);
        return findMid(sortedArray);
    }
};