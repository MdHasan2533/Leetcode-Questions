class Solution {
public:
    static int countofOne( int  num){
        int cnt = 0;
        while( num > 0 ){
            num = num & num - 1;
            cnt++;
        }
        return cnt;
    }
    static bool compare(int a, int b){
        int p = countofOne(a);
        int q = countofOne(b);
        if( p==q ){
            return (a<b);
        }
        else{
            return (p<q);
        }
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};