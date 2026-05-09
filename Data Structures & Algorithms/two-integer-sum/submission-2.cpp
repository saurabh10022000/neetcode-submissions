class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();++i)
        {
            int x=nums[i];
            int sub=target-x;
            if(mp.find(sub)!=mp.end())
            {
                return {mp[sub],i};
            }
            mp[x]=i;
        }
        return {0,0};
    }
};
