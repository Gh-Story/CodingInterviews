#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<vector>
#include<stack>

using namespace std;

class CQueue {
public:
	stack<int> st1, st2;
	CQueue() {
		while (!st1.empty()) {
			st1.pop();
		}
		while (!st2.empty()) {
			st2.pop();
		}
	}

	void appendTail(int value) {
		st1.push(value);
	}

	int deleteHead() {
		int ans = -1;
		if (!st2.empty()) {
			ans = st2.top();
			st2.pop();
			return ans;
		}
		if (st1.empty()) {
			return ans;
		}
		else {
			while (!st1.empty()) {
				st2.push(st1.top());
				st1.pop();
			}
			ans = st2.top();
			st2.pop();
			return ans;
		}
	}
};