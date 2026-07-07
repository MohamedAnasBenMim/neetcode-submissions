class Solution {
public:
    bool isSubsequence(string s, string t) {
        int it=0;
        int is=0;
        while(is<s.size() && it<t.size()){
            if(t[it]==s[is]) {
                it++;
                is++;
            }
            else it++;
        }
        if (is==s.size()) return true;
        return false;
    }
};