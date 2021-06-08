class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if((s.length()==0)||(s.length()==1))
            return s.length()==0?0:1;
        set<char>subString={};
        int maxLength=1;
        int onePaslength=0;
        for(int i=0;i<s.length();i++){
            subString={s[i]};
            onePaslength=1;
            for(int j=i+1;j<s.length();j++){
                if (subString.find(s[j]) != subString.end()){
                    break;
                }
                subString.insert(s[j]);
                onePaslength += 1;
                maxLength = max(maxLength, onePaslength);
            }
        }
        return maxLength;

    }
};
