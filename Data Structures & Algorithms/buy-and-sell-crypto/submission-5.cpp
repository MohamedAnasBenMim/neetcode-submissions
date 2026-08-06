class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mn=prices[0];
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-mn;
            mn=min(mn,prices[i]);
            mx=max(mx,profit);
        }
        return mx;
    }
};
