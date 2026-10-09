class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &x:nums){
            if(mp.contains(x)){
                mp[x]+=1;
            }
            else{
                mp[x]=1;
            }
        }
        for(auto &x:mp){
            if(x.second>(nums.size()/2)){
                return x.first;
            }
        }
        return 0;
    }
};