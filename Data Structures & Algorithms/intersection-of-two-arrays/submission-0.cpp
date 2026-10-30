class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(nums1.begin(),nums1.end());
        set<int>st2(nums2.begin(),nums2.end());
        vector<int>ans;
        unordered_map<int,int>mp;
        
        for(auto x:st1){
            mp[x]+=1;
        }
        for(auto x:st2){
            mp[x]+=1;
        }
        for(auto x:mp){
            if(x.second>=2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};