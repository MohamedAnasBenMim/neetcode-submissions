//dp[i]=number of ways to decode s[i:] ml i 7atta lele5er
class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        int dp[n+1];
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0') dp[i]=0; // 0 alone can t be decoded like 10 must go to 1
            else {
                dp[i]=dp[i+1];
                if(i<n-1 && (s[i]=='1' || s[i]=='2' && s[i+1]<'7')) dp[i]+=dp[i+2];
                }
            }
        return dp[0];
    }
};
