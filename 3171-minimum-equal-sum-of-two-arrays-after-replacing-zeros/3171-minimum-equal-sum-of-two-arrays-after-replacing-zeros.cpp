class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        
        long long int firstSum = 0;
        long long int firstZero = 0;
        
        for( int num : nums1 ){
            if( num == 0){
                firstZero++;
            }
            firstSum += num;
        }
        
        long long int secondSum = 0;
        long long int secondZero = 0;
        for( int num : nums2 ){
            if( num == 0 ){
                secondZero++;
            }
            secondSum += num;
        }
        
        if( firstSum + firstZero < secondSum + secondZero){
            long long int temp = firstSum;
            firstSum = secondSum;
            secondSum = temp;
            temp = firstZero;
            firstZero = secondZero;
            secondZero = temp;
        }
        
        if( firstSum + firstZero > secondSum && secondZero == 0){
            return -1;
        }
        
        return firstSum + firstZero;
        
    }
};