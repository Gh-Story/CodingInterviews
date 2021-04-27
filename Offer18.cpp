#include<iostream>

using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (head == NULL) {
			return head;
		}
		if (head->val == val) {
			return head->next;
		}
		ListNode * ans = head;
		while (head->next!=	NULL &&head->next->val!=val) {
			head = head->next;
		}
		head->next = head->next->next;
		return ans;
	}
};