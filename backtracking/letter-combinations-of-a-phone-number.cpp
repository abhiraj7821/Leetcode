class Solution {
private:
    void solve(string digits,string& output,int index,vector<string>& ans,string mapping[]){
        // base case
        if(index >= digits.length()) {
            ans.push_back(output);
            return;
        }
        // Processing
        int number = digits[index]-'0';  // if not do - '0' it will give char not the number so we do - 0
        string eles = mapping[number];

        for(int i=0; i<eles.length(); i++){
            output.push_back(eles[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()== 0) return ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;
        int index = 0;
        solve(digits,output,index,ans,mapping);
        return ans;
    }
};