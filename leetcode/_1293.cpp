//
// Created by lichen on 9/14/22.
//
#include <bits/stdc++.h>
#include "_1293.h"

using namespace std;
/*
 * 1293. Shortest Path in a Grid with Obstacles Elimination
 * https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/
 * */

class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, -1));
        vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        queue<vector<int>> q;
        q.push({0, 0, k});
        visited[0][0] = k;
        int step = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto cur = q.front();
                q.pop();
                int x = cur[0], y = cur[1], remain = cur[2];
                if (x == m - 1 && y == n - 1) return step;
                for (int j = 0; j < 4; j++) {
                    int nx = x + dirs[j][0], ny = y + dirs[j][1];
                    if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                    if (grid[nx][ny] == 1 && remain == 0) continue;
                    if (visited[nx][ny] >= remain - grid[nx][ny]) continue;
                    visited[nx][ny] = remain - grid[nx][ny];
                    q.push({nx, ny, remain - grid[nx][ny]});
                }
            }
            step++;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,0,0},{1,1,0},{0,0,0},{0,1,1},{0,0,0}};
    int k = 1;
    cout << s.shortestPath(grid, k) << endl;
    return 0;
}