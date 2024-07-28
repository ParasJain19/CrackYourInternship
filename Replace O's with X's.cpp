
class Solution {
public:
    int n, m;
    vector<vector<char>> copy_grid;

    void makethem_Y(int r, int c, vector<vector<char>>& copy_grid) {
        if (r < 0 || r >= n || c < 0 || c >= m || copy_grid[r][c] != 'O') {
            return;
        }
        copy_grid[r][c] = 'Y';
        makethem_Y(r + 1, c, copy_grid); // down
        makethem_Y(r - 1, c, copy_grid); // up
        makethem_Y(r, c + 1, copy_grid); // right
        makethem_Y(r, c - 1, copy_grid); // left
    }

    void makethem_O(int r, int c, vector<vector<char>>& copy_grid) {
        if (r < 0 || r >= n || c < 0 || c >= m || copy_grid[r][c] != 'Y') {
            return;
        }
        copy_grid[r][c] = 'O';
        makethem_O(r + 1, c, copy_grid); // down
        makethem_O(r - 1, c, copy_grid); // up
        makethem_O(r, c + 1, copy_grid); // right
        makethem_O(r, c - 1, copy_grid); // left
    }

    void make_X(int r, int c, vector<vector<char>>& copy_grid) {
        if (r < 0 || r >= n || c < 0 || c >= m || copy_grid[r][c] != 'O') {
            return;
        }
        copy_grid[r][c] = 'X';
        make_X(r + 1, c, copy_grid); // down
        make_X(r - 1, c, copy_grid); // up
        make_X(r, c + 1, copy_grid); // right
        make_X(r, c - 1, copy_grid); // left
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
        this->n = n;
        this->m = m;
        copy_grid = mat;

        // Mark boundary 'O's as 'Y'
        for (int i = 0; i < m; i++) { // 1st row
            if (copy_grid[0][i] == 'O') {
                makethem_Y(0, i, copy_grid);
            }
        }
        for (int i = 0; i < n; i++) { // 1st col
            if (copy_grid[i][0] == 'O') {
                makethem_Y(i, 0, copy_grid);
            }
        }
        for (int i = 0; i < m; i++) { // last row
            if (copy_grid[n - 1][i] == 'O') {
                makethem_Y(n - 1, i, copy_grid);
            }
        }
        for (int i = 0; i < n; i++) { // last col
            if (copy_grid[i][m - 1] == 'O') {
                makethem_Y(i, m - 1, copy_grid);
            }
        }

        // Convert all remaining 'O's to 'X'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (copy_grid[i][j] == 'O') {
                    make_X(i, j, copy_grid);
                }
            }
        }

        // Convert all 'Y's back to 'O'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (copy_grid[i][j] == 'Y') {
                    makethem_O(i, j, copy_grid);
                }
            }
        }

        return copy_grid;
    }
};
