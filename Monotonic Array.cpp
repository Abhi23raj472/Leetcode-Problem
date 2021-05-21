class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool incr = true;
        bool decr = true;
        for(int i = 0; i < A.size() - 1; i++) {
            if(A[i] > A[i+1]) incr = false;
            if(A[i] < A[i+1]) decr = false;
            if(incr == false && decr == false) return false;
        }
        return true;
        
    }
};
