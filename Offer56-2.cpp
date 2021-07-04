#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum[32];
        memset(sum, 0, sizeof(sum));
        for(int num:nums){
            for(int j=0;j<32;j++){
                sum[j] +=num&1;
                num>>=1;
            }
        }
        int ans =0,mods=3;
        for(int i =0;i<32;i++){
            ans<<=1;
            ans|=sum[31-i]%mods;
        }
        return ans;
    }
};