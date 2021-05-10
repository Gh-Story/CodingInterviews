#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int res = 1e9+7;
    int cuttingRope(int n) {
        if(n<4)return n-1;
        unsigned int ans=1;
        if(n%3==1){
            int c = n/3-1;
            for(int i=0;i<c;i++){
                ans = (ans * 3)%res;
            }
            ans = (ans * 4)%res;
        }else if(n%3==2){
            int c = n/3;
            for(int i=0;i<c;i++){
                ans = (ans * 3)%res;
            }
            ans = (ans * 2)%res;
        }else{
            for(int i=0;i<n/3;i++){
                ans = (ans * 3)%res;
            }
        }
        return ans;
    }
    
};