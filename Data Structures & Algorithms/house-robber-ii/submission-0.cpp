class Solution {
public:
    int rob1(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++) nums[i]=nums[i+1];
        n--;
        if(n==1) return nums[0];
        int dp[n+1]={0};
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        int ans=0;
        for(int i=0;i<n+1;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }

    int rob2(vector<int>& nums) {
        int n=nums.size();
        n--;
        if(n==1) return nums[0];
        int dp[n+1]={0};
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        int ans=0;
        for(int i=0;i<n+1;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }
    int rob(vector<int>& nums) {
        return max(rob1(nums),rob2(nums));
    }
};
