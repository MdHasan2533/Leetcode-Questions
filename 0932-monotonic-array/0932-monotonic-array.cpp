class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool Increasing = false;
        bool Decreasing = false;

        for ( int  i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i+1]){
                Increasing = true;
            }
            if( nums[i] > nums[i+1]){
                Decreasing = true;
            }
        }

        if( Increasing == true && Decreasing == true){
            return false;
        }
        return true;
    }
};