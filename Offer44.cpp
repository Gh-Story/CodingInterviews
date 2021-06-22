#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    int data[9]={9,189,2889,38889,488889,5888889,68888889,788888889,2147483647};
    int sts[9] ={0,10,190,2890,38890,488890,5888890,68888890,788888890};
    int nums[9]={1,2,3,4,5,6,7,8,9};
    int numd[9]={0,10,100,1000,10000,100000,1000000,10000000,100000000};
public:
    int findNthDigit(int n) {
        int index = 0;
        for(;index<9;index++){
            if(data[index]>=n)break;
        }
        int dif = n - sts[index];
        int start = numd[index];
        int step = nums[index];

        int dis = dif / step;
        int mods = dif % step;

        for(int i=0;i<dis;i++){
            start++;
        }
        int t = 1;
        for(int i=1;i<step-mods;i++){
            t *=10;
        }
        return start / t % 10;
    }
    
};

/*

class Solution {
public:
     int findNthDigit(int n) {
        int digit = 1;
        long long  start = 1;
        long long  count = 9;
        while (n > count) { // 1.
            n -= count;
            digit += 1;
            start *= 10;
            count = digit * start * 9;
        }
        long long num = start + (n - 1) / digit; // 2.
        int c = (n - 1) % digit;//3
        int t = 1;
        for(int i=1;i<digit-c;i++){
            t *=10;
        }
        return num/t%10;
    }
};



*/