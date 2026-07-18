class Solution {
public:
    string addStrings(string num1, string num2) {
       string ans;
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        while(i>=0 || j>=0){
            if(i<0){
                ans.push_back(((num2[j]-48+carry)%10)+48);
               	carry=(num2[j]-48+carry)/10;
               	j=j-1;
            }
            else
            if(j<0){
                ans.push_back(((num1[i]-48+carry)%10)+48);
               	carry=(num1[i]-48+carry)/10;
               	i=i-1;
            }
            else
            {
                ans.push_back((((num1[i]-48)+(num2[j]-48)+carry)%10)+48);
                carry=(num1[i]-48+num2[j]-48+carry)/10;
                i=i-1;
                j=j-1;
            }
        }
        if(carry){
            ans.push_back(carry+48);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};