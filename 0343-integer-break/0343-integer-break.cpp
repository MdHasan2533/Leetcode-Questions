class Solution {
public:
    int integerBreak(int n) {
        int ans = 0;
        for(int k = 2; k <= n; k++ ){
            int quo = n / k;
            int rem = n % k;
            int product = pow(quo + 1, rem) * pow( quo, k - rem);
            ans = max( ans, product);
        }
        return ans;
    }
};