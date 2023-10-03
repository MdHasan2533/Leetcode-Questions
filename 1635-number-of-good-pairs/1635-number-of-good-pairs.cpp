//TC: O(n)
//SC: O(n)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = 0;
        for( int num : nums){
            if(m.find(num) != m.end()){
                ans += m[num];
                m[num]++;
            }
            else{
                m[num] = 1;
            }
        }
        return ans;
    }
};