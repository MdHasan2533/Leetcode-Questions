class Solution {
public:
    bool winnerOfGame(string colors) {
        int cntA = 0;
        int cntB = 0;
        int n = colors.size();
        int j(0);
        while(j<n){
            if(colors[j] == 'A'){
                int cnt = 0;
                while(colors[j] == 'A' && j<n){
                    cnt++;
                    j++;
                }
                if(cnt>=3) cntA += cnt-2;
            }
            if(colors[j] == 'B'){
                int cnt = 0;
                while(colors[j] == 'B' && j < n){
                    cnt++;
                    j++;
                }
                if(cnt>=3) cntB += cnt - 2;
            }
        }
        return cntA > cntB;
    }
};