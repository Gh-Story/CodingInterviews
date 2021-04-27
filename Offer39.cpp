#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int majorityElement(vector<int>& nums) {
	unordered_map<int, int> st;
	for (int num : nums) {
		if (++st[num] > nums.size()/2)return num;
	}
	return -1;
}


int main() {
	vector<int> tr = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	majorityElement(tr);
	system("pause");
	return 0;
}
