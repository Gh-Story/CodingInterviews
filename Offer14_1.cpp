#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int cuttingRope(int n) {
        if(n<4)return n-1;
        int ans=0;
        if(n%3==1){
            int c = n/3-1;
            ans = pow(3,c)*4;
        }else if(n%3==2){
            int c = n/3;
            ans = pow(3,c)*2; 
        }else{
            ans = pow(3,n/3);
        }
        return ans;
    }
};