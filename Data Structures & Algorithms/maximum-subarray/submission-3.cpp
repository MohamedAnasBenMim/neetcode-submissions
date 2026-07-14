class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans=nums[0];
        for(int i=0;i<nums.size();i++){
            int s=0;
            for(int j=i;j<nums.size();j++){
                s+=nums[j];
                ans=max(ans,s);
            }
        }
        return ans;
    }
};
