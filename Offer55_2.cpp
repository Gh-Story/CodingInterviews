#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
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
    //method one 8ms-16ms
    int maxDepth(TreeNode*root){
        if(root==NULL)return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int l =maxDepth(root->left);
        int r = maxDepth(root->right);
        return abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
    //method two 8ms-16ms
    int maxDepth(TreeNode*root){
        if(root==NULL)return 0;
        int hl = maxDepth(root->left);
        if(hl == -100) return -100;
        int hr = maxDepth(root->right);
        if(hr == -100) return -100;
        return abs(hl-hr)<=1?max(hr,hl)+1:-100;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        return maxDepth(root)!=-100;
    }
};