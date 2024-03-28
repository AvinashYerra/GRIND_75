class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int ind=0,c=1;
       for(int i=1;i<nums.size();i++){
        if(nums[ind]==nums[i]) {
            c++;
        }else{
            c--;
        }
        if(c==0){
            ind=i;
            c=1;
        }
       } 
       return nums[ind];
    }
};