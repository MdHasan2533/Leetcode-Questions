/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {

private:
    int findPeak(MountainArray &arr){
        int start = 0;
        int end = arr.length()-1;
        while(start<end){
            int mid = start + ( end - start) / 2;
            if(arr.get(mid) > arr.get(mid + 1)){
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }
        return start;
    }

public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peakIndex = findPeak(mountainArr);
        int start = 0;
        int end = peakIndex;
        while( start <= end){
            int mid = start + (end - start) / 2;
            int midVal = mountainArr.get(mid);
            if(midVal == target) return mid;
            else if( midVal > target) end = mid - 1;
            else start = mid + 1; 
        }

        start = peakIndex;
        end = mountainArr.length() - 1;

        while( start <= end){
            int mid = start +(end - start) / 2;
            int midVal = mountainArr.get(mid);
            if(midVal == target) return mid;
            else if( midVal > target) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
};