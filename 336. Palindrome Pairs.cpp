/*  
Given a list of unique words, return all the pairs of the distinct indices (i, j) in the given list, so that the concatenation of the two words words[i] + words[j] is a palindrome.

 

Example 1:

Input: words = ["abcd","dcba","lls","s","sssll"]
Output: [[0,1],[1,0],[3,2],[2,4]]
Explanation: The palindromes are ["dcbaabcd","abcddcba","slls","llssssll"]
Example 2:

Input: words = ["bat","tab","cat"]
Output: [[0,1],[1,0]]
Explanation: The palindromes are ["battab","tabbat"]
Example 3:

Input: words = ["a",""]
Output: [[0,1],[1,0]]
 

Constraints:

1 <= words.length <= 5000
0 <= words[i].length <= 300
words[i] consists of lower-case English letters.

*/

class Solution {
 public:
  vector<vector<int>> palindromePairs(vector<string>& words) {
    vector<vector<int>> ans;
    unordered_map<string, int> map;  

    for (int i = 0; i < words.size(); ++i) {
      string word = words[i];
      reverse(begin(word), end(word));
      map[word] = i;
    }

    for (int i = 0; i < words.size(); ++i) {
      const string& word = words[i];
      if (map.count("") && map[""] != i && isPalindrome(word))
        ans.push_back({i, map[""]});
      for (int j = 1; j <= word.length(); ++j) {
        const string& l = word.substr(0, j);
        const string& r = word.substr(j);
        if (map.count(l) && map[l] != i && isPalindrome(r))
          ans.push_back({i, map[l]});
        if (map.count(r) && map[r] != i && isPalindrome(l))
          ans.push_back({map[r], i});
      }
    }

    return ans;
  }

 private:
  bool isPalindrome(const string& word) {
    int l = 0;
    int r = word.length() - 1;
    while (l < r)
      if (word[l++] != word[r--])
        return false;
    return true;
  }
};
