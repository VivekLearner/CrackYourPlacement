void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<pair<int, int>> zero;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                zero.push_back(make_pair(i, j));
            }
        }
    }
    for (auto& pair : zero) {
        int row = pair.first;
        int col = pair.second;
        for (int t = 0; t < rows; ++t) {
            matrix[t][col] = 0;
        }
        for (int k = 0; k < cols; ++k) {
            matrix[row][k] = 0;
        }
    }
}