class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        unordered_set<string> st;
        sort(words.begin(),words.end(),
            [](string & a,string & b){
                return a.size()>b.size();
            });
        for(string ch:words) cout<<ch<<" ";
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(words[i].find(words[j])!=string::npos) st.insert(words[j]);
            }
        }
        for(auto x:st){
            ans.push_back(x);
        }
        return ans;
    }
};