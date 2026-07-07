class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        int n=nums.size();
        for(int e:nums){
            if(seen.count(e)>0){
                return true;
            }
            seen.insert(e);
        }
        return false;
    }
};