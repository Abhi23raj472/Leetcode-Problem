class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1){
            return true;
            
        }
        int position=0;
        while(true){
            int maxlength=0;
            int maxIndex=0;
            for(int i=1;i<=nums[position] && i+position<nums.size();i++){
                if(nums[position+i]+i>maxlength){
                    maxlength=nums[position+i]+i;
                    maxIndex=i;
                }
            }
            if(maxIndex==0){
                return false;
            }
            position=maxIndex+position;
            if(position>=nums.size()-1){
                return true;
            }
            
        }
        return false;
    }
};
