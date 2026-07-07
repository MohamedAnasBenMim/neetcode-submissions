class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto p : mp){
            if(p.second>1) return true;
        }
        return false;
    }
};