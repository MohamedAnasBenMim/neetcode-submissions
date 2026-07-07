class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        unordered_map<int,int> mps;
        unordered_map<int,int> mpt;
        for(int i=0;i<n;i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        return mps==mpt;
    }
};
