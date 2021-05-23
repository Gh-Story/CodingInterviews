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
vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>>ans;
	if (root == NULL)return ans;
    bool flag = true;
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		int num = q.size();
		vector<int>tmp;
        if(flag){
            flag = false;
            for (int i = 0; i < num; i++) {
			    TreeNode*node = q.front();
			    q.pop();
			    tmp.push_back(node->val);
			    if(node->left!=NULL)q.push(node->left);
			    if (node->right != NULL)q.push(node->right);
		    }
		    ans.push_back(tmp);
        }else{
            flag = true;
            for (int i = 0; i < num; i++) {
			    TreeNode*node = q.front();
			    q.pop();
			    tmp.push_back(node->val);
			    if(node->left!=NULL)q.push(node->left);
			    if (node->right != NULL)q.push(node->right);
		    }
            reverse(tmp.begin(),tmp.end());
		    ans.push_back(tmp);
        }
		
	}
	return ans;
}
