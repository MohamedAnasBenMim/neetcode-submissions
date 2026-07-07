class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for(string mail:emails){
            string name="";
            string domaine="";
            int i=0;
            while(mail[i]!='@'){
                if(mail[i]=='+'){
                    while(mail[i]!='@') i++;
                    break;
                }
                if(mail[i]!='.') name+=mail[i];
                i++;
            }
            //cout<<name<<" ";
            i++;
                        while (i < mail.size()) {
                domaine += mail[i];
                i++;
            }

            st.insert(name + "@" + domaine);
        }
        return st.size();
    }
};