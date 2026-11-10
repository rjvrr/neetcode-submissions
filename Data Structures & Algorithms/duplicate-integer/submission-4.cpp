class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]+=1;
        }
        for(auto x:mp){
            if(x.second>=2){
                return true;
            }
        }
        return false;
    }
};