class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        int low=0;
        int high=low+1;
        int count=1;
        while(high<nums.size()){
            if(nums[low]==nums[high]-1){
                count++;
                low++,high++;
                ans=max(ans,count);
            }
            else if(nums[low]==nums[high]){
                low++,high++;
            }
            else{
                ans=max(count,ans);
                count=1;
                low=high;
                high++;
            }
        }
        return ans;
    }
};
