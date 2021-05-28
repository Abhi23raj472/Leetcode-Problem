class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j;
        bool swapped=false;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
    }
};
