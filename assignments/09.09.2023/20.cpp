class Solution {
public:
    bool isValid(string s) {
        stack<int>q;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                q.push(s[i]);
            }
            else{
                if(q.size()==0){
                    return 0;
                }
                if(s[i]=='}' && q.top()=='{'){
                    q.pop();
                }
                else if(s[i]==')' && q.top()=='('){
                    q.pop();
                }
                else if(s[i]==']' && q.top()=='['){
                    q.pop();
                }
                else{
                    return 0;
                }
            }
        }
        if(q.size()==0){
            return true;
        }
        return false;
    }
};