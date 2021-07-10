#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
class Solution {
private:
    int division(int a,int b){
        int ans=0;
        int aa =abs(a);
        int bb =abs(b);
        while(aa!=0){
            ans++;
            aa-=bb;
        }  
        return ((a>0&&b>0) || (a<0&&b<0))?ans:-ans;
    }
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int>ans(a.size(),0);
        int mul=1;
        int nums = 0;
        for(int num:a){
            mul*=num;
            if(num==0)nums++;
        }
        if(nums>1)return ans;
        else if(nums==1){
            int tmp=1,index=0;
            for(int i =0;i<a.size();i++){
                if(a[i]==0){
                    index=i;
                    continue;
                }
                tmp*=a[i];
            }
            ans[index]=tmp;
            return ans;
        }else{
            for(int i=0;i<a.size();i++){   
                ans[i]=division(mul,a[i]);
            }
        }
        return ans;
    }
};
class Solution{
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> ans(a.size(),1);
        int tmp=1;
        for(int i=1;i<a.size();i++){
            ans[i]=ans[i-1]*a[i-1];
        }
        for(int i=a.size()-2;i>=0;i--){
            tmp*=a[i+1];
            ans[i]*=tmp;
        }
        return ans;
    }
};