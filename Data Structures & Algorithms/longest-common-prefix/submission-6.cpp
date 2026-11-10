class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string temp1=strs[0];
        string temp2=strs[strs.size()-1];
        for(int i=0;i<min(temp1.size(),temp2.size());i++){  
            if(temp1[i]!=temp2[i]){
                break;
            }
            ans+=temp1[i];    
        }
        return ans;
    }
};