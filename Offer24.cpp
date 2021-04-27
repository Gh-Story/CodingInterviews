/*
#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode* reverseList(ListNode* head) {
	if (head == NULL || head->next == NULL)return head;
	ListNode* pre = NULL;
	ListNode* now = head;
	ListNode* latter = head->next;
	while (latter != NULL) {
		now->next = pre;
		pre = now;
		now = latter;
		latter = latter->next;
	}
	now->next = pre;
	return now;
}
int main() {
	ListNode * head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	ListNode *ans = reverseList(head);
	cout << ans->val << endl;
	cout << ans->next->val << endl;
	cout << ans->next->next->val << endl;
	system("pause");
	return 0;
}
*/