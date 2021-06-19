#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == NULL)return NULL;
		unordered_map<Node*, Node*> res;
		Node* h = head;
		while (h != NULL) {
			Node* tmp = new Node(h->val);
			res[h] = tmp;
			h = h->next;
		}
		h = head;
		while (h != NULL) {
			res[h]->next = h->next != NULL? res[h->next]:NULL;
			res[h]->random = h->random!=NULL? res[h->random]:NULL;
			h = h->next;
		}
		return res[head];
	}
};