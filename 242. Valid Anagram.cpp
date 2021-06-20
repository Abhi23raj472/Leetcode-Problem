/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size(),n2=t.size();
        if(n1!=n2){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n1;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
