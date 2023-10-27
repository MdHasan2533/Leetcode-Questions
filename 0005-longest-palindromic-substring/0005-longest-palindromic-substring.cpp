class Solution {
public:
    int getLength(string &s, int left, int right){
        while( left>= 0 && right < s.size() && s[left] == s[right]){
            --left;
            ++right;
        }
        return right - left - 1;
    }

    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        int leftIdx = 0, rightIdx = 0;
        for(int i = 0; i < s.size(); ++i){
            int currLength = getLength(s,i,i);
            int pairLength = getLength(s,i,i+1);
            int maxLength = currLength >= pairLength ? currLength : pairLength;
            if(maxLength > rightIdx - leftIdx){
                leftIdx = i - ( maxLength - 1) / 2;
                rightIdx = i + maxLength / 2;
            }
        }
        return s.substr(leftIdx, rightIdx - leftIdx + 1);
    }
};