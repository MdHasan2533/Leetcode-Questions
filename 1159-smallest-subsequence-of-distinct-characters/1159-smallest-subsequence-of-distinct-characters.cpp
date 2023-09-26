class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        string ans;
        vector<bool> taken(26, false);
        vector<int> lastIndex(26);

        for( int i = 0; i < n; i++){
            char ch = s[i];
            lastIndex[ch - 'a'] = i;
        }

        for( int i = 0; i < n; i++){
            int index = s[i] - 'a';
            if(taken[index] == true) continue;

            while(ans.size() > 0 && ans.back() > s[i] && lastIndex[ans.back() - 'a'] > i){
                taken[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(s[i]);
            taken[index] = true;
        }
        return ans;
    }
};