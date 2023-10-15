class Solution {
public:
    int n;
    int t[501][501];
    int mod = 1e9+7;
    int solve(int idx, int steps){

        if( idx < 0 || idx >= n){
            return 0;
        }
        if( steps == 0){
            return idx == 0;
        }

        if(t[idx][steps] != -1){
            return t[idx][steps];
        }

        int ans = solve( idx + 1, steps - 1 ) % mod;
        ans = ( ans + solve( idx - 1, steps - 1 )) % mod;
        ans = ( ans + solve( idx , steps - 1 )) % mod;

        return t[idx][steps] = ans;
    }
    int numWays(int steps, int arrLen) {
        arrLen = min ( arrLen , steps);
        n = arrLen;
        memset(t, -1, sizeof(t));
        return solve(0, steps);
    }
};