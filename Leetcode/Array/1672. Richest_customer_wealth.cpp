class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (auto &row : accounts) {
            int sum = 0;
            for (int x : row) sum += x;
            maxWealth = max(maxWealth, sum);
        }
        return maxWealth;
    }
};
