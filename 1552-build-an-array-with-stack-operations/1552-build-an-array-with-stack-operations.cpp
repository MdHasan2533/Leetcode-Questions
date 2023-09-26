//Without using Stack
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int top = 1;
        int ts = target.size();
        for( int i = 0; i < ts; i++){
            while(top != target[i]){
                top++;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            top++;
            ans.push_back("Push");
        }
        return ans;
    }
};