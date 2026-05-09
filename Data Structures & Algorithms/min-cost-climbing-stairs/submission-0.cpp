class Solution {
public:
    int my(int i,vector<int>& cost)
    {
        if(i==0)return cost[0];
        if(i==1)return cost[1];
        int s=cost[i]+my(i-1,cost);
        int s2=cost[i]+my(i-2,cost);
        return min(s,s2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return my(n,cost);
    }
};
