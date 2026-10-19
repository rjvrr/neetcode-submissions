class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int pos=1;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]+=1;
        }
        for(auto x:mp){
            if(mp.find(pos)==mp.end()){
                return pos;
            }
            pos++;
        }
        return pos;
    }

};