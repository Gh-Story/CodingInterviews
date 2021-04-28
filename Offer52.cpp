/*

#include<iostream>
#include<unordered_map>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    //method one : O(n^2) 744s=27*27
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node_1 = headA;
        while(node_1 != NULL){
            ListNode *node_2 = headB;
            while(node_2 != NULL){
                if(node_1 == node_2){
                    return node_1;
                }
                node_2 = node_2->next;
            }
            node_1 = node_1->next;
        }
        return NULL;
    }
    //method two : O(2n) 54s=27*2
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node_1 = headA;
        unordered_map<ListNode*,int> list_1;
        while(node_1!=NULL){
            list_1[node_1]=node_1->val;
            node_1=node_1->next;
        }
        ListNode *node_2 = headB;
        while(node_2!=NULL){
            if(list_1.find(node_2)!=list_1.end())return node_2;
            node_2 = node_2->next;
        }
        return NULL;
    }
    //method three 48s
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node_1 = headA;
        ListNode *node_2 = headB;
        while(node_1!=node_2){
            node_1 = node_1 != NULL? node_1->next : headB;
            node_2 = node_2 != NULL? node_2->next : headA;
        }
        return node_1;
    }
    
};
*/