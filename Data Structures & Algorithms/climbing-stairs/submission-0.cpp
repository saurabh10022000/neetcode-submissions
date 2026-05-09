class Solution {
public:
    int my(int i)
    {
        if(i==0)return 1;
        if(i==1)return 1;
        if(i<0)return 0;
        int a=my(i-1);
        int b=my(i-2);
        return a+b;
    }
    int climbStairs(int n) {
        return my(n);
    }
};
