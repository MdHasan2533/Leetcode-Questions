class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        temp.push_back(nums[0]);
        for( int i = 1; i < nums.size(); i++){
            if( nums[i] != nums[i-1]){
                temp.push_back(nums[i]);
            }
        }
        int add = nums.size()-1;
        int mn = INT_MAX;
        for( int i = 0; i < temp.size(); i++){
            int low = i;
            int high = temp.size() - 1;
            while( high - low > 1){
                int mid = low + (high - low) / 2;
                if( temp[mid] <= temp[i] + add){
                    low = mid;
                }
                else{
                    high = mid - 1;
                }
            }
            if(temp[high] <= temp[i] + add){
                int diff = high - i;
                mn = min(mn,add-diff);
            }
            else{
                int diff = low - i;
                mn = min(mn, add-diff);
            }
        }
        return mn;
    }
};