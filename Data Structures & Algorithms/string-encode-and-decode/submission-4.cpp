class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto x:strs){
            encoded+=to_string(x.length())+"#"+x;
        }
        return encoded;
    }
    vector<string> decode(string s) {
        vector<string>ans;
        int l=0;
        int length=0;
        while (l < s.size()) {
            int length = 0;
            while (l<s.size() && s[l]!='#'){
                length=length*10+(s[l] - '0');
                l++;
            }
            l++; 
            ans.push_back(s.substr(l,length));
            l += length; 
        }
        return ans;
    }
};
