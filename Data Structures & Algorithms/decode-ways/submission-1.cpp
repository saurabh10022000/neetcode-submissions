class Solution {
public:
    int my(int i,string s,int n)
    {
        if(i>n)return 1;
        if(s[i]=='0')return 0;
        int a=my(i+1,s,n);
        int b=0;
        if(i+1<n)
        {
            if(s[i]=='1' || s[i]=='2' && s[i+1]<='6')
            {
                b=my(i+2,s,n);
            }
        }
        return a+b;
    }
    int numDecodings(string s) {
        int n=s.size();
        return my(0,s,n);
    }
};
