class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low=0;
        int count=0;
        while(low<nums.size()){
            if(nums[low]!=val){
                count++;
                low++;
            }
            else{
                low++;
            }
        }
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return count;
    }
};