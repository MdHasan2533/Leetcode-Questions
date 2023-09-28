class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start  = 0; 
        int end = nums.size() - 1;

        while( start < end){
            while( start < end && nums[start] % 2 == 0){
                start++;
            }
            while(start < end && nums[end] % 2 == 1){
                end--;
            }

            swap(nums[end], nums[start]);
        }
        return nums;
    }
};