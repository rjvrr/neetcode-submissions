class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        int del=1;
        while(l<r){
            if(s[l]!=s[r]){
                del--;
                if(s[l+1]==s[r] && s[l+2]==s[r-1]){
                    l++;
                }
                else{
                    r--;
                }     
            }
            else{
                l++,r--;
            }
        }
        if(del<0){
            return false;
        }
        return true;
    }
};