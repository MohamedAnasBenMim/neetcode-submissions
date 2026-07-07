class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        bool dp[n+1][n+1]={false};
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] && (dp[i+1][j-1]==true || j-i+1<=3)) {
                    dp[i][j]=true;
                    ans++;
                }
            }
        }
        return ans;
    }
};
