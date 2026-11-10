class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto x:s){
            mp1[x]+=1;
        }
        for(auto x:t){
            mp2[x]+=1;
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
