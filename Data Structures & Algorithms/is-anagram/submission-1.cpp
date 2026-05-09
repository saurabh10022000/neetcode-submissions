class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size()!=t.size())return false;
        vector<int>s1(26,0);
        for(int i=0;i<s.size();++i)
        {
            //cout<<t[i]-'a'<<",";
            s1[s[i]-'a']++;
            
            
                s1[t[i]-'a']--;
            
        }
        for(auto &x:s1)
        {
            if(x!=0)
            {
                return false;
            }
        }
        return true;

    }
};
