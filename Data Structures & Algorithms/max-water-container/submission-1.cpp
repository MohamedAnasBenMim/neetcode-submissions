class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int mx=INT_MIN;
        while(i<j){
            int vol=(j-i)*min(heights[i],heights[j]);
            mx=max(mx,vol);
            if(heights[i]<heights[j]) i++;
            else if(heights[i]>=heights[j]) j--;
        }
        return mx;
    }
};
