class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int ans=1;
        int mx=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            else if(nums[i+1]-nums[i]==1) ans++;
            else  {
                mx=max(ans,mx);
                ans=1;
            } 
        }
        return max(mx,ans);
    }
};

// 0 1 1 2 3 4 5 6    mx2 ans
