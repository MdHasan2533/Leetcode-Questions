class Solution {
public:
    int kthGrammar(int n, int k) {
        bool sameVal = true;
        n = pow( 2, n-1);
        while( n != 1){
            n = n / 2;
            if( k > n){
                k = k - n;
                sameVal = !sameVal;
            }
        }
        return((sameVal) ? 0 : 1);
    }
};