#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        return dfs(0,postorder.size()-1,postorder);
    }
    bool dfs(int i,int j,vector<int> &arr){
        if(i>=j)return true;
        int index = i;
        while(arr[index]<arr[j])index++;
        int m = index;
        while(arr[index]>arr[j])index++;
        return index==j&&dfs(i,m-1,arr) && dfs(m,j-1,arr);
    }
};
/*
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。
     5
    / \
   2   6
  / \
 1   3
输入: [1,6,3,2,5]
输出: false

输入: [1,3,2,6,5]
输出: true
*/