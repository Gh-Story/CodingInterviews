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
   unordered_map<int,TreeNode*> fathers;
    void father(TreeNode* f) { 
        if(f->left!=NULL){
            fathers[f->left->val]=f;
            father(f->left);
        }
        if(f->right!=NULL){
            fathers[f->right->val]=f;
            father(f->right);
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       fathers[root->val]=NULL;
       father(root);
       TreeNode*m=p;
       TreeNode*n=q;
       while(m!=NULL){
           n=q;
           while(n!=NULL){
               if(n==m)return m;
               n=fathers[n->val];
           }
           m=fathers[m->val];
       }
       return NULL;
    }
};