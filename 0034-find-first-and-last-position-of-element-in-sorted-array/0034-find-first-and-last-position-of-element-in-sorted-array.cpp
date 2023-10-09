class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums,target, true);
        int right = binarySearch(nums,target, false);
        if(left <= right){
            return{left,right};
        }
        else{
            return {-1,-1};
        }
    }
    int binarySearch(vector<int>& nums, int target, bool findLeft){
        int start = 0;
        int end = nums.size() - 1;
        int index = -1;

        while( start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                index = mid;
                if( findLeft){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return index;
    }
};