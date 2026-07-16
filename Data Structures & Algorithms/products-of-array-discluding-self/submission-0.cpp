class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=1;
            for(int j=0;j<n;j++){
                if(i!=j) v[i]*=nums[j];   
            }
        }
        return v;
    }
};
