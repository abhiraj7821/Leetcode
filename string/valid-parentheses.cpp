class Solution {
public:
    bool isValid(string s) {

        stack<char> stack;
        
        for(int i=0;i<s.length();i++){

            char ch=s[i];

            //if opening bracket->stack push
            //if closing bracket->stackTop Check and Pop

            if(ch=='('||ch=='{' || ch=='['){
                stack.push(ch);
            }
            else{
                //for closing bracket
                if(!stack.empty()){
                    char top=stack.top();
                    if((ch=='}' && top=='{') || 
                    (ch==')' && top=='(') || 
                    (ch==']' && top=='[')){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }

        if(stack.empty())
            return true;
        else
            return false;
    }
};