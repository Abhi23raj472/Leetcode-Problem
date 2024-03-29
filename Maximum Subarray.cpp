class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==1){
            return nums[0];
        }
        int currSum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(maxSum<currSum){
                maxSum=currSum;
            }
            if(currSum<0){
                currSum=0;
            }
            
            
        }
        return maxSum;
    }
};
