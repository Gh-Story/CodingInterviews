/*
#include<iostream>
#include<vector>
using namespace std;
int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
vector<int> spiralOrder(vector<vector<int>>& matrix) {
	if (matrix.size() == 0 || matrix[0].size() == 0)return {};
	int rows = matrix.size();
	int cols = matrix[0].size();
	vector<vector<bool>> visited(rows, vector<bool>(cols));
	int sum = rows * cols;
	vector<int>ans(sum);

	int r = 0, c = 0;
	int nr = 0, nc = 0;
	int dirindex = 0;
	for (int i = 0; i < sum; i++) {
		ans[i] = matrix[r][c];
		visited[r][c] = true;
		nr = r + dir[dirindex][0];
		nc = c + dir[dirindex][1];
		if (nr < 0 || nr >= rows || nc < 0 || nc >= cols || visited[nr][nc]) {
			dirindex = (dirindex + 1) % 4;
		}
		r = r + dir[dirindex][0];
		c = c + dir[dirindex][1];
	}
	return ans;
}

*/