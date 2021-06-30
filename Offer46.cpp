#include<iostream>
#include<string>
using namespace std;
class Solution {
private:
    int ans = 0;
    void dfs(string str,int start,int len){
        if(start+len>str.size())return;
        if(len==2 && str[start]=='0')return;
        int num = atoi(str.substr(start,len).c_str());
        if(num>25)return;
        if(start+len==str.size()){
            ans++;
            return;
        }
        dfs(str,start+len,1);
        dfs(str,start+len,2);
    }
public:
    int translateNum(int num) {
        string str = to_string(num);
        dfs(str,0,0);
        return ans;
    }
    //method two:dp
    int translateNum(int num){
        string str = to_string(num);
        int dp[15];
        memset(dp,0,sizeof(dp));
        dp[1]=1;
        for(int i = 0;i<str.size();i++){
            dp[i+2]+=dp[i+1];
            if(i==0)continue;
            string pre = str.substr(i-1,2);
            if(pre<="25" && pre>="10"){
                dp[i+2]+=dp[i];
            }
        }
        return dp[str.size()+1];
    }
    //method two optimal
    int translateNum(int num){
        string str = to_string(num);
        int preNum=0,prepreNum=0,curNum=1;
        for(int i = 0;i<str.size();i++){
            prepreNum = preNum;
            preNum = curNum;
            curNum = 0;
            curNum +=preNum;
            if(i==0)continue;
            string pre = str.substr(i-1,2);
            if(pre<="25" && pre>="10"){
                curNum+=prepreNum;
            }
            
        }
        return curNum;
    }
};