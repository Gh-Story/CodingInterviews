#include<vector>
#include<iostream>

using namespace std;

int counts[100000];

int findRepeatNumber(vector<int>& nums) {
	int i = 0;
	for ( i = 0; i < nums.size(); i++) {
		counts[nums[i]]++;
		if (counts[nums[i]] > 1)
			break;
	}
	return nums[i];
}

/*int main() {
	vector<int> nums ={1,1,1};
	cout << findRepeatNumber(nums) << endl;
	system("pause");
	return 0;
}*/