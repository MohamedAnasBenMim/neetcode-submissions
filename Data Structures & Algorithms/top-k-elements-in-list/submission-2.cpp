class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
            });
        for(auto &p:v) {
            cout<<p.first<<" "<<p.second<<endl;
            ans.push_back(p.first);
            if(ans.size()==k) break;
        }
        return ans;
    }
};
