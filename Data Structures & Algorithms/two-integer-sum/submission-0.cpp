class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i = 0 ; i< nums.size() ; i++){
            int comp = target-nums[i];
            vector<int> ans;
            if(mp.find(comp)!=mp.end()){
                ans.push_back(mp[comp]);
                ans.push_back(i);
                sort(ans.begin(),ans.end());
                return ans; 
            }
            mp[nums[i]]=i;
        }
    }
};
