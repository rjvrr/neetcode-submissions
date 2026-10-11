class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        map<int,vector<int>>m;
        vector<int>ans;
        for(auto x:nums){
            mp[x]+=1;
        }
        for(auto x:mp){
            m[x.second].push_back(x.first);
        }
        for (auto it = m.rbegin(); it != m.rend(); it++){
            for (auto x : it->second) {
                ans.push_back(x);
            }
        }
        ans=vector<int>(ans.begin(),ans.begin()+k);
        return ans;
    }
};
