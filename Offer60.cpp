#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
class Solution {
public:
    vector<double> dicesProbability(int n) {
        double dp[70];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=6;i++){
            dp[i]= 1.0/6.0;
        }
        for(int i =2;i<=n;i++){
            for(int j=i*6;j>=i;j--){
                dp[j]=0.0;//避免上一轮结果对本轮结果的影响
                for(int cur=1;cur<=6;cur++){
                    if(j-cur<i-1)break;//上一轮结果到i-1为止，所以有效范围是[i-1,6*(i-1)]
                    dp[j] += dp[j-cur] * (1.0/6.0) ;
                }
            }
        }
        vector<double>ans;
        for(int i=n;i<=n*6;i++ ){
            ans.push_back(dp[i]);
        }
        return ans;
    }
};