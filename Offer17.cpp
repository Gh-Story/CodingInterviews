#include<iostream>
#include<vector>
#include"Math.h"
using namespace std;
vector<int> printNumbers(int n) {
	vector<int> ans;
	for (int i = 1; i < (int)pow(10, n); i++) {
		ans.push_back(i);
	}
	return ans;
}





