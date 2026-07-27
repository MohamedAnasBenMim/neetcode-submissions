class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        int mx=INT_MIN;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int curr=num;
                int l=1;
                while(st.find(curr+1)!=st.end()) {
                    curr++;
                    l++;
                }
                mx=max(mx,l);
            }
        }
        return mx;
    }
};
// 2 3 4 5 10 20 