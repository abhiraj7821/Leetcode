class Solution {
private:
    bool valid(string& str,int s,int e){
        //base case
        if(s>e){
            return true;
        }
        if(str[s]!=str[e])
            return false;
        return valid(str,s+1,e-1);
    }
    string convert(string& s){
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' ){
                ans.push_back(s[i]);
            }
            if(s[i]>='A' && s[i]<='Z'){
                s[i] =  (s[i] | ' '); 
                ans.push_back(s[i]);
            }
            if(s[i]>='0'&&s[i]<='9'){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
    
public:
    bool isPalindrome(string s) {
         if(s.length()==0||s.length()==1)
                return true;
         s=convert(s);
         if(s.length()==0||s.length()==1)
                return true;
        
        if(valid(s,0,s.length()-1)){
                return true;
        }
        else{
                return false;
            }
    }
};