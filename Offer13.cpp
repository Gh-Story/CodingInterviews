/*
#include<iostream>

using namespace std;
int ans;
bool visit[100][100];

void dfs(int i, int j, int m, int n, int k) {
	if (i < 0 || i >= m || j<0 || j >= n ||visit[i][j]|| (i % 10 + i / 10 + j % 10 + j / 10)>k)return;
	visit[i][j] = true;
	ans++;
	dfs(i + 1, j, m, n, k);
	dfs(i , j+1, m, n, k);
}
int movingCount(int m, int n, int k) {
	ans = 0;
	dfs(0, 0, m, n, k);
	return ans;
}
*/