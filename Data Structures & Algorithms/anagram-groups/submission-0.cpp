class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> kbir;
        for(string &w:strs){
            string key=w;
            sort(key.begin(),key.end());
            mp[key].push_back(w);
            //cout<<w<<" ";
        }
        for(auto & [key,group] : mp) kbir.push_back(group);
        return kbir;

    }
};
