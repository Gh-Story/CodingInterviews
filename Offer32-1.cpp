#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<int> ans;
        queue<TreeNode*> tmps;
        tmps.push(root);
        while(!tmps.empty()){
            TreeNode* tmp = tmps.front();
            tmps.pop();
            ans.push_back(tmp->val);
            if(tmp->left!=NULL)tmps.push(tmp->left);
            if(tmp->right!=NULL)tmps.push(tmp->right);
        }
        return ans;
    }
};