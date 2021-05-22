#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
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
    bool isSame(TreeNode* A, TreeNode* B){
        if(A==NULL && B!=NULL)return false;
        if(B==NULL)return true;
        if(A->val !=B->val)return false;
        return isSame(A->left,B->left) && isSame(A->right,B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(B==NULL)return false;
        if(A==NULL)return false;

        vector<TreeNode*>tmps;
        queue<TreeNode*> q;
        TreeNode*tmp;
        q.push(A);
        while(!q.empty()){
            tmp=q.front();
            q.pop();
            if(tmp->val==B->val){
                tmps.push_back(tmp);
            }
            if(tmp->left !=NULL) q.push(tmp->left);
            if(tmp->right !=NULL) q.push(tmp->right);
        }
        bool ans = false;
        
        for(int i =0;i<tmps.size();i++){
            ans = ans || isSame(tmps[i],B);
        }
        
        return ans;
    }
};