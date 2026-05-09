class Solution {
public:
    bool check(int st,int e,string s)
    {
        if(st>=e)return true;
        if(s[st]==s[e])
        {
            return check(st+1,e-1,s);
        }
        return false;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int stind=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(i,j,s) && j-i+1>l)
                {
                    stind=i;
                    l=max(l,j-i+1);
                }
            }
        }
        return s.substr(stind,l);
    }
};
