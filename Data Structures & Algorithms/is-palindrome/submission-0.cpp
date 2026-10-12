class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(auto c:s){
            if(isalnum(c)){
                c=tolower(c);
                temp+=c;
            }
        }
        int low=0;
        int high=temp.size()-1;
        while(low<high){
            if(temp[low]!=temp[high]){
                return false;
            }
            low++,high--;
        }
        return true;
    }
};
