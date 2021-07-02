#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1)return s.size();

        vector<int>chars(128,-1);
        vector<int>occur(s.size(),0);
        vector<int>dp(s.size(),0);

        for(int i=0;i<s.size();i++){
            occur[i]=chars[s[i]]+1;
            chars[s[i]]=i;
        }
        int ans=0;
        dp[0]=1;
        for(int i=1;i<s.size();i++){
            int start = i-dp[i-1] > occur[i]?i-dp[i-1]:occur[i];
            dp[i]=i-start+1;
            ans = ans<dp[i]?dp[i]:ans;
        }
        return ans;
    }
};