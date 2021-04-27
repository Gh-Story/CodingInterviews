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
	if (root == NULL) return NULL;
	TreeNode*root2 = new TreeNode(root->val);
	root2->left = mirrorTree(root->left);
	root2->right = mirrorTree(root->right);
	TreeNode*tmp = root2->left;
	root2->left = root2->right;
	root2->right = tmp;
	return root2;
}
bool isTheSame(TreeNode*node_1, TreeNode*node_2) {
	if ((node_1 != NULL && node_2 == NULL)||(node_1 == NULL && node_2 != NULL)) return false;
	if (node_1 == NULL && node_2 == NULL)return true;
	return isTheSame(node_1->left, node_2->left) && isTheSame(node_1->right, node_2->right) && node_1->val == node_2->val;
}
bool isSymmetric(TreeNode* root) {
	TreeNode*root_2 = mirrorTree(root);
	return isTheSame(root, root_2);
}
int main() {
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->right = new TreeNode(3);
	root->right->right = new TreeNode(3);
	cout << bool(isSymmetric(root)) << endl;
	system("pause");
	return 0;
}
*/