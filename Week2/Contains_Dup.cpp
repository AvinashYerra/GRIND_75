class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1;
        int mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
            }else{
                
                c=1;
                
            }
            mx=max(mx,c);
        }
        return mx>=2;
    }
};