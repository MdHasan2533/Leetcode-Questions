class Solution {
public:
    int mod = 1e9 + 7 ;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ;
        int n = arr.size() ;
        long long ans = 1 ;
        
        
        unordered_map<int,long long> mapp ;

        for(auto x : arr)
           mapp[x] = 1 ;
        
        for(int i = 1 ; i < n ; i++)
        {
            long long  cnt = 0 ;
            for(int j = 0 ; j <= i-1 ; j++)
            {
                    if(arr[i] % arr[j] == 0)
                    {
                        int right = arr[i] / arr[j] ;

                        if(mapp[right] > 0)
                            cnt = (cnt + mapp[arr[j]]*mapp[right]) % mod ;
                    }
            }
            mapp[arr[i]] = mapp[arr[i]] + cnt ;
            ans = (ans + mapp[arr[i]]) % mod ;
        }

        return ans % mod;
    }
};