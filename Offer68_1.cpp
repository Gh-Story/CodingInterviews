#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
   unordered_map<TreeNode*,vector<TreeNode*>> fathers;
    void father(TreeNode* f,vector<TreeNode*>ans) { 
	if (f == NULL)return;
	ans.push_back(f);
	fathers[f] = ans;
	father(f->left, ans);
	father(f->right, ans);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        father(root,{});
        vector<TreeNode*>pv = fathers[p];
        vector<TreeNode*>qv = fathers[q];
        TreeNode* ancestor;
        for (int i = 0; i < pv.size() && i < qv.size(); ++i) {
            if (pv[i] == qv[i]) {
                ancestor = pv[i];
            }
            else {
                break;
            }
        }
        return ancestor; 
    }
};