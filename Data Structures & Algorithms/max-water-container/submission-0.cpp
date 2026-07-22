class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int vol=abs(j-i)*min(heights[i],heights[j]);
                mx=max(mx,vol);
            }
        }
        return mx;
        
    }
};
