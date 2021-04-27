/*
#include<iostream>

using namespace std;

struct ListNode {
	  int val;
	  ListNode *next;
	  ListNode(int x) : val(x), next(NULL) {}
  };
int ans=-1;
ListNode *res;

void dfs(ListNode* head, int k) {
	if (head != NULL)dfs(head->next, k);
	ans++;
	if (ans == k) res = head;
}

ListNode* getKthFromEnd(ListNode* head, int k) {
	dfs(head, k);
	return res;
}

int main() {
	ListNode * head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	ListNode *ans = getKthFromEnd(head, 2);
	cout << ans->val << endl;
	system("pause");
	return 0;
}
*/