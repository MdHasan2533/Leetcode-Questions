class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> arrtime(n);

        for( int i = 0; i < n; ++i){
            arrtime[i] = (dist[i] - 1) / speed[i];
        }

        sort(arrtime.begin(), arrtime.end());

        for(int i = 0; i < n; ++i){
            if (i > arrtime[i]){
                return i;
            }
        }
        return n;
    }
};