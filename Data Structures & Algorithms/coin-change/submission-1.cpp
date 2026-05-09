class Solution {
public: 
    int myrecursion(int i,vector<int>& coins,int amount,vector<vector<int>>&dp)
    {
        if(i==0)
        {
            if(amount%coins[0]==0)
            {
                return amount/coins[0];
            }
            return 1e9;
        }
        if(dp[i][amount]!=-1)
        {
            return dp[i][amount];
        }
        int way1=1e9;
        int way2;
        if(amount>=coins[i])
        {
            way1=1+myrecursion(i,coins,amount-coins[i],dp);
        }
        way2=myrecursion(i-1,coins,amount,dp);
        return dp[i][amount]=min(way1,way2);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=myrecursion(n-1,coins,amount,dp);
        if(ans>=1e9)
        {
            return -1;
        }  
        return ans;
    }
};