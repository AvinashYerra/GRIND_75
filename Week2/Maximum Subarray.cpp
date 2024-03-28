class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int curr=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curr+=nums[i];
            maxi=max(curr,maxi);
            if(curr<0){
                curr=0;
            }
        }
        return maxi;
    }
};