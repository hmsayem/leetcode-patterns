class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector < vector <int> > v;
        if(m * n != original.size()) {
            return v;
        }
        v.assign(m, vector <int> (n, 0));
        int id = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                v[i][j] = original[id++];
            }
        }
        return v;
    }
};