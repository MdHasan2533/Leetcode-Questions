class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        while(start < s.size()){
            while(end < s.size() && s[end]!= ' '){
                end++;
            }
            reverse(s.begin() + start,s.begin() + end);
            start = end + 1;
            end = start;
        }
        return s;
    }
};