class Solution {
public:
    bool isPal(string s){
        int n=s.size();
        if(n<=1) return true;
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1-i]) return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans;
        int curr=1;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int len=1;len<=n;len++){
                string ch=s.substr(i,len);
                if(isPal(ch)==true) {
                    cout<<ch<<endl;
                    int l=ch.size();
                    if(l>=curr) {ans=ch;
                    curr=l;} 
                    //cout<<ans<<endl;
                }
            }
        }
        return ans;
    }
};
