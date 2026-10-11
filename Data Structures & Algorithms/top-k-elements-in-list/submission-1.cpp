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
            for(int i=0;i<it->second.size();i++) {
                if(k==0){
                    return ans;
                }
                ans.push_back(it->second[i]);
                k--;
            }
        }
        return ans;
    }
};
