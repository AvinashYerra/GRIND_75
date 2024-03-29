class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="*"){
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                s.push(a*b);
            }else if(tokens[i]=="/"){
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                s.push(a/b);
            }else if(tokens[i]=="+"){
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                s.push(a+b);
            }else if(tokens[i]=="-"){
                long long b=s.top();
                s.pop();
                long long a=s.top();
                s.pop();
                s.push(a-b);
            }else{
                s.push(stoi(tokens[i]));
            }
        }
            return s.top();
        
    }
};