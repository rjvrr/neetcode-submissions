class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int r=1;
        int count=0;
        while(r<nums.size()){
            if(nums[l]!=nums[r]){
                count++;
                l++;
                r++;
            }
            else{
                nums.erase(nums.begin()+l);
            }
        }
        return count+1;
    }
};