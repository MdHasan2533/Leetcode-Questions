class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int m = flowers.size();
        int n = people.size();

        vector<int> start;
        vector<int> end;

        for( int i = 0; i < m; i++){
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }

        sort(start.begin(),start.end());
        sort(end.begin(), end.end());

        vector<int> ans;

        for( int i = 0; i < n; i++){

            int time = people[i];
            int bloomedFlowers = upper_bound(start.begin(), start.end(), time) - start.begin();
            int diedFlowers = lower_bound(end.begin(), end.end(), time) - end.begin();
            ans.push_back(bloomedFlowers - diedFlowers);

        }

        return ans;
    }
};