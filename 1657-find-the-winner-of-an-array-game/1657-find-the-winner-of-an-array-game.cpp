class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if ( k == 1) {
            return max( arr[0], arr[1]);
        }
        if( k >= arr.size()){
            return *std::max_element(arr.begin(), arr.end());
        }

        int curr = arr[0];
        int consecutive = 0;

        for( int i = 1; i < arr.size(); ++i){
            if(curr > arr[i]){
                consecutive++;
            }
            else{
                curr = arr[i];
                consecutive = 1;
            }
            if(consecutive == k){
                return curr;
            }
        }
        return curr;
    }
};