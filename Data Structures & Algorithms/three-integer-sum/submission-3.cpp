class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int s = nums[i] + nums[l] + nums[r];
                if (s == 0) {
                    vector<int> temp={nums[i],nums[r],nums[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    l++;
                    r--;
                }
                else if(s<0) l++;
                else r--;
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};

// -1 -1 0 1 2 4
// nums[j]+nums[k]==-nums[i]