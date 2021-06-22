#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;


class Solution {
public:
    vector<string> ans;
    vector<string> permutation(string s) {        
        dfs(s,0);
        return ans;
    }
    void dfs(string s,int pos){
        if(pos+1==s.size()){
            ans.push_back(s);
            return;
        }
        for(int i=pos;i<s.size();i++){
            bool flag=false;
            for(int j=pos;j<i;j++){
                if(s[j]==s[i])flag=true;
            }
            if(flag)continue;
            swap(s[i],s[pos]);
            dfs(s,pos+1);
            swap(s[i],s[pos]);
        }
        return;
    }
};