//dp[i][j] = true if the substring s[i..j] is a palindrome.
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n+1][n+1]={false};
        int currlen=1;
        int firstindex=0;
        int lastindex=0;
        string ans;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if((dp[i+1][j-1]==true || (j-i+1)<=2) && s[i]==s[j]){
                    dp[i][j]=true;
                    if(j-i+1>=currlen){
                        currlen=j-i+1;
                        ans=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};
