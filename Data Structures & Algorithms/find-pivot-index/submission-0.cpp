class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int t_sum=accumulate(nums.begin(),nums.end(),0);
        int low=0;
        while(low<nums.size()){
            if(t_sum-sum-nums[low]==sum){
                return low;
            }
            sum+=nums[low];
            low++;   
        }
        return -1;
    }
};