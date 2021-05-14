class Solution {
public:
    void reverse(vector<int>&num,int start,int end) {
        while(start<end){
            swap(num[start],num[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>&nums,int k){
        int n=(int)nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};
