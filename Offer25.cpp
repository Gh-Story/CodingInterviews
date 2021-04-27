/*
#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (l1 == NULL)return l2;
	else if (l2 == NULL)return l1;

	ListNode* head = new ListNode(0);
	ListNode* ans = head;
	while (l1 != NULL && l2 != NULL) {
		if (l1 == NULL) {
			ans->next = l2;
			l2 = l2->next;
		}
		else if (l2 == NULL) {
			ans->next = l1;
			l1 = l1->next;
		}
		else if (l1->val <= l2->val) {
			ans->next = l1;
			l1 = l1->next;
		}
		else {
			ans->next = l2;
			l2 = l2->next;
		}
		ans = ans->next;
	}
	ans->next = l1 == NULL ? l2 : l1;
	return head->next;
}
*/