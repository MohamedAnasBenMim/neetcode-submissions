class Solution {
public:
    int maxDifference(string s) {
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int maxodd=INT_MIN;
        int mineven=INT_MAX;
        for(auto p:mp){
            if(p.second%2==0){
                if(p.second<mineven) mineven=p.second;
            }
            else{
                if(p.second>maxodd) maxodd=p.second;
            }
        }
        return maxodd-mineven;
    }
};