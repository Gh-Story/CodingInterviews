#include<iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0)return 1;
        if(x==0)return 0;
        if(n==1)return x;
        unsigned int b = n ;
        if(n<0){
            x=1/x;
            b = (unsigned int)(-(n+1) )+ 1;
        }
        double res = 1;
        while(b){
            if(b&1) res*=x;
            x*=x;
            b>>=1;
        }
        return res;
    }
};