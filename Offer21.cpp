#include<iostream>
#include<vector>


using namespace std;
/*
vector<int> exchange(vector<int>& nums) {
	vector<int> ans;
	int len = nums.size();
	for (int i = 0; i < len; i++) {
		if (nums[i] % 2 == 1) {
			ans.insert(ans.begin(), nums[i]);
		}
		else {
			ans.push_back(nums[i]);
		}
	}
	return ans;

}
*/

vector<int> exchange(vector<int>& nums) {
	int fast = 0, low = 0;
	for (; fast < nums.size(); fast++) {
		if (nums[fast] % 2 == 1) {//%2==1  <=> &1
			swap(nums[low], nums[fast]);
			low++;
		}
	}
	return nums;
}
