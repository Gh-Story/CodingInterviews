#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
	TreeNode *left;
	TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
private:
	vector<vector<int>> ans;
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) {
		ans.clear();
		dfs(root,target,{});
		return ans;
    }
	void dfs(TreeNode* root,int target, vector<int>tmp){
		if(root==nullptr)return;

		tmp.push_back(root->val);
		target =target - root->val;

		if(target==0&&root->left==nullptr && root->right==nullptr){
				ans.push_back(tmp);
			    
		}
		dfs(root->left,target,tmp);
		dfs(root->right,target,tmp);
		return;
	}
};