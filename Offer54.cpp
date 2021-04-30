/*
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
//method : 20ms-28ms
    int kthLargest(TreeNode* root, int k) {
        vector<int> ans;
        TreeNode *node=root;
        stack<TreeNode*> s;
        while(!s.empty()||node!=NULL){
            while(node!=NULL){
                s.push(node);
                node=node->left;
            }
            node = s.top();
            ans.push_back(node->val);
            s.pop();
            node = node->right;

        }
        return ans[ans.size()-k];
    }
}; 
*/  
