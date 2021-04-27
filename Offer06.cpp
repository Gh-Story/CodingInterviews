#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<vector>
#include<stack>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

vector<int> reversePrint(ListNode* head) {
	vector<int> ans;
	if (head == NULL)return ans;
	while (head != NULL) {
		ans.push_back(head->val);
		head = head->next;
	}
	reverse(ans.begin(), ans.end());
	return ans;

}
