class Solution {
public:
    int r, c;

    bool CHEAK(int i, int j){
        if(i >= 0 && j >= 0 && i < r && j < c){
            return true;
        }
        return false;
    }

    void clean_area(vector<vector<char>>& grid, int i, int j) {
        if(grid[i][j] == '0') return;
        
        if(grid[i][j] == '1') grid[i][j] = '0';

        if(CHEAK(i+1, j)) clean_area(grid, i+1, j);
        if(CHEAK(i-1, j)) clean_area(grid, i-1, j);
        if(CHEAK(i, j+1)) clean_area(grid, i, j+1);
        if(CHEAK(i, j-1)) clean_area(grid, i, j-1);

    }

    int numIslands(vector<vector<char>>& grid) {
        r = grid.size();
        c = grid[0].size();

        int ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == '1') {
                    ans++;
                    clean_area(grid, i, j);
                }
            }
        }

        return ans;
    }
};