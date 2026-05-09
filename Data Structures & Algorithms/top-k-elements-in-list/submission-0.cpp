class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>bucket(n+1);
        for(auto&x:mp)
        {
            int digi=x.first;
            int count=x.second;
            bucket[count].push_back(digi);
        }
        vector<int>ans;
        for(int i=n;i>=0&&ans.size()<k;--i)
        {
            for(auto &x:bucket[i])
            ans.push_back(x);
            if (ans.size() == k) break;
        }
        return ans;
    }
};
