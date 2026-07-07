class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int ans=0;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            p=1;
            for(int j=i;j<n;j++){
                p*=nums[j];
                ans=max(ans,p);
            }
        }
        return ans;
    }
};
