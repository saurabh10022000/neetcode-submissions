class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto &x:strs)
        {
            vector<int>help(26,0);
            for(int i=0;i<x.size();++i)
            {
                help[x[i]-'a']++;
            }
            string temp="";
            for(auto &x:help)
            {
                temp+=to_string(x)+"#";
            }

            mp[temp].push_back(x);
        }
        for(auto &x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
