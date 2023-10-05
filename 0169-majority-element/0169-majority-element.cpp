class Solution {
public:
    
    vector<int> arr1;
    
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int i= 0;
        while(i<n)
        {
            int check= nums[i];
            int count= 0;

            while(i<n && nums[i]==check)
            {
                count++;
                i++;
            }

            if(count>n/2)
                return check;
        }

        return false;
    }
};