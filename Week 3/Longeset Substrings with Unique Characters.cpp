class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int n=nums.size();
        int i=0,j=0;
        map<char,int>mp;
        int maxi=0;
        while(j<n){
            mp[nums[j]]++;
            if(mp.size()==j-i+1){
                maxi=max(maxi,j-i+1);
            }
            while(mp.size()<(j-i+1)){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return maxi;
    }
};