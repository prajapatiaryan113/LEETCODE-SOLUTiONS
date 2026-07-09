class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
    unordered_map<int, int> freq;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            freq[grid[i][j]]++;
        }
    }
    for (int i = 1; i <= n * n; i++) {
        if (freq[i] == 0) {
            ans[1] = i;      
        }
        if (freq[i] == 2) {
            ans[0] = i;     
        }
    }
    return ans;
    }
};