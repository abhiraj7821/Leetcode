#include<map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxLen=0;
        map<char,int> ele;
        while(r<s.length()){
            if( ele.contains(s[r]) && ele[s[r]] >= l ){
               l=ele[s[r]]+1; 
                ele[s[r]]=r;
            }
            ele[s[r]]=r;
            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
    }
};