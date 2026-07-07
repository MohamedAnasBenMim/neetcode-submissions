class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int li=1;
        int mxi=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) {
                li++;
            }
            else{
                mxi=max(mxi,li);
                li=1;  
            }
        }
        mxi=max(mxi,li);
        int ld=1;
        int mxd=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) {
                ld++;
            }
            else{
                mxd=max(mxd,ld);
                ld=1;  
            }
        }
        mxd=max(mxd,ld);
        cout<<mxd<<" "<<mxi;
        return max(mxi,mxd);
    }
};