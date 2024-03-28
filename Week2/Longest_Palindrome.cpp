class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>mp;
       for(auto it:s){
        mp[it]++;
       }
       bool flag=false;
       int ans=0;
       for(auto it:mp){
          ans+=(it.second/2)*2;
          if(it.second%2!=0){
            flag=true;
          }
       }
       return flag ? ans+1 :ans;
    }
};