class Solution {
public:
    int my(int i,vector<int>& cost,vector<int>&dp)
    {
        if(i==0)return cost[0];
        if(i==1)return cost[1];
        if(dp[i]!=-1)return dp[i];
        int s=cost[i]+my(i-1,cost,dp);
        int s2=cost[i]+my(i-2,cost,dp);
        return dp[i]=min(s,s2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(my(n,cost,dp),my(n-1,cost,dp));
    }
};
