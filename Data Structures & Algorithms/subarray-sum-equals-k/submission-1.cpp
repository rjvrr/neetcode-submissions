class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        //brute force
        if(nums.size()==0){
            return 0;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            sum+=nums[i];
            if(sum==k) count++;
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }
};