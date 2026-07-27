class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char> par = {
        {'}','{'},
        {']','['},
        {')','('}
        };
        for( char c : s){
            if(par.count(c)){
                if(!stack.empty() && stack.top() == par[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
