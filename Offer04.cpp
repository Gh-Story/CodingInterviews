#include<vector>
#include<iostream>

using namespace std;

/*bool BinarySearch(vector<int>& data,int target) {
	int m = data.size();
	int l = 0;
	int r = m - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (data[mid] < target) {
			l = mid + 1;
		}
		else if (data[mid] > target) {
			r = mid - 1;
		}
		else {
			return true;
		}
	}
	return false;
}

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	int n = matrix.size();
	if (!n)return false;
	int m = matrix[0].size();
	if (!m)return false;
	for (int i = 0; i < n; i++) {
		if (BinarySearch(matrix[i], target)) {
			return true;
		}
	}
	return false;
}*/
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	if (matrix.size() == 0)return false;
	if (matrix[0].size() == 0)return false;
	int n = matrix.size();
	int m = matrix[0].size();
	int r = 0, c = m - 1;
	while (r < n&&c >= 0) {
		if (matrix[r][c] == target) {
			return true;
		}
		else if (matrix[r][c] > target) {
			c--;
		}
		else {
			r++;
		}
	}
	return false;
}