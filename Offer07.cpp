#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<vector>
#include<stack>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int binarySearch(vector<int>& data,int num) {
	for (int i = 0; i < data.size(); i++) {
		if (data[i] == num)return i;
	}
	return -1;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
	if (preorder.size() == 0)return NULL;
	int num = preorder[0];
	TreeNode* root = new TreeNode(num);
	int pos = binarySearch(inorder, num);
	vector<int> pre(preorder.begin() + 1, preorder.begin() + pos + 1);
	vector<int> in(inorder.begin(), inorder.begin() + pos);
	root->left = buildTree(pre,in);
	vector<int> pre2(preorder.begin() + pos+1, preorder.end());
	vector<int> in2(inorder.begin()+pos+1, inorder.end());
	root->right=buildTree(pre2, in2);
	return root;
}
/*
int main() {
	vector<int> pre = { 3,9,20,15,7 };
	vector<int> in = { 9,3,15,20,7 };
	TreeNode*root = buildTree(pre,in);
	cout << root->val << endl;
	cout << root->left->val << endl;
	cout << root->right->val << endl;
	cout << root->right->left->val << endl;
	cout << root->right->right->val << endl;
	
	system("pause");
	return 0;
}
*/