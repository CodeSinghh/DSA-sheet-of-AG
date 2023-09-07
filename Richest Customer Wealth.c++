class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int rows = accounts.size();
        int cols = accounts[0].size();
        vector<int> mon;
        int k;
        for (int i = 0; i < rows; i++) {
            vector<int> sez;
            int sum = 0;
            for (int j = 0; j < cols; j++) {
                sez.push_back(accounts[i][j]);
            }
            for (int k = 0; k < sez.size(); k++) {
                sum = sum + sez[k];
            }
            mon.push_back(sum);
        }
        sort(mon.begin(), mon.end());
        k = mon[mon.size() - 1];
        return k;
    }
};
