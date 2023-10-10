class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int arrSize = nums.size(); 
        vector<int> ans(arrSize,1);

        int left_fact = 1;
        int right_fact = 1;
        int i = 0;

        while( i < arrSize){
            ans[i] *= left_fact;
            left_fact *= nums[i];
            ans[arrSize - ++i] *= right_fact;
            right_fact *= nums[arrSize - i];
        }
        return ans;
    }
};