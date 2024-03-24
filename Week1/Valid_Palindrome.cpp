class Solution {
public:
    bool ischar(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(auto it:s){
            if(ischar(it)){
               if(it>='A' && it<= 'Z'){
                temp+=(it+32);
               }else{
                temp+=it;
               }
            }
        }
        cout<<temp;
        int n=temp.size();
        for(int i=0;i<n/2;i++){
            if(temp[i]!=temp[n-i-1]){
                return false;
            }
        }
        return true;

    }
};