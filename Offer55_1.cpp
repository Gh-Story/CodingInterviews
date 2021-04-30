/*
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
private:
    int depth=0;
public:
    //method:4ms-16ms
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    //method:8ms-16ms
    int maxDepth(TreeNode* root){
        if(root==NULL)return 0;

        TreeNode* node;
        queue<TreeNode*>q;
        int size = 0;
        int depth = 0;

        q.push(root);
        while(!q.empty()){
            size = q.size();
            depth++;
            for(int i = 0; i < size; i++ ){
                node = q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
            }
        }
        return depth;
    }
};
*/