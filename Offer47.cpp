#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        dfs(0,0,0,row,col,grid);
        return ans;
    }
    int maxValue(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col));//二维数组定长初始化
        //边界条件
        dp[0][0]=grid[0][0];
        for(int i=1;i<row;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int i=1;i<col;i++){
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        //dp过程
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[row-1][col-1];
    }
private:
    int ans;
    void dfs(int i,int j,int v,int row,int col,vector<vector<int>>& grid){
        if(i>=row || j>=col)return;
        v +=grid[i][j];
        if(i==row-1&&j==col-1&&v>ans){
            ans = v ;
            return;
        }
        dfs(i+1,j,v,row,col,grid);
        dfs(i,j+1,v,row,col,grid);
    }
};