/*  
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(!n){
 	        return false;
        }
        int m=matrix[0].size();
        if(!m){
 	        return false;
        }
        int l=0,r=n*m-1;
        while(l<r){
 	        int med=(l+r)/2;
 	        (matrix[med/m][med%m]<target)?(l=med+1):(r=med);
        }
        return matrix[l/m][l%m]==target;
    }
    
};
