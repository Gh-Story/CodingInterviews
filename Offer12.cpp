#include<vector>
#include<iostream>

using namespace std;

int row, col;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };


bool dfs(int i, int j, int k, vector<vector<char>>& board, string word) {
	if (i >= row || i<0 || j>=col || j < 0 || board[i][j] != word[k])return false;
	if (k == word.size() - 1)return true;
	for (int m = 0; m < 4; m++) {
		board[i][j] = '\0';
		if (dfs(i + dir[m][0], j + dir[m][1], k + 1, board, word)) {
			return true;
		}
		board[i][j] = word[k];
	}
	return false;
}

bool exist(vector<vector<char>>& board, string word) {
	row = board.size();
	col = board[0].size();
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (dfs(i, j, 0, board, word)) {
				return true;
			}
		}
	}
	return false;
}