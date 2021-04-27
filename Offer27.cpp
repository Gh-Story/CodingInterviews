/*
#include<iostream>
using namespace std;
struct TreeNode {
	  int val;
	  TreeNode *left;
	  TreeNode *right;
	  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



TreeNode* mirrorTree(TreeNode* root) {
	if (root == NULL) return root;
	root->left = mirrorTree(root->left);
	root->right = mirrorTree(root->right);
	TreeNode*tmp = root->left;
	root->left = root->right;
	root->right = tmp;
	return root;
}

int main() {
	TreeNode *root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(7);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(3);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(9);
	TreeNode*ans=mirrorTree(root);
	cout << ans->val << endl;
	cout << ans->left->val << endl;
	cout << ans->right->val << endl;
	cout << ans->left->left->val << endl;
	cout << ans->left->right->val << endl;
	cout << ans->right->left->val << endl;
	cout << ans->right->right->val << endl;
}
*/