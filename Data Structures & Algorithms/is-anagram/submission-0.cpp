class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        if(s.length()!=t.length()) return  false;

        for(int i =  0 ; i < s.length() ; i++){
            if(mp1.find(s[i])!=mp1.end()){
                mp1[s[i]]+=1;
            }
            else{ mp1[s[i]]=1; }

            if(mp2.find(t[i])!=mp2.end()){
                mp2[t[i]]+=1;
            }else{ mp2[t[i]]=1; }
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
