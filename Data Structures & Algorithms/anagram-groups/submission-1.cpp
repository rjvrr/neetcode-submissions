
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<string> sorted = strs;

        for (int i = 0; i < sorted.size(); i++) {
            sort(sorted[i].begin(), sorted[i].end());
        }

        for (int i = 0; i < strs.size(); i++) {
            mp[sorted[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for (auto &x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};
