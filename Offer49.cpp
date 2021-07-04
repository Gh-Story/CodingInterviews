#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<pair<long,int>,vector<pair<long,int>>,greater<pair<long,int>> >minheap;
        minheap.push(pair<long,int>(2L,2));
        minheap.push(pair<long,int>(3L,3));
        minheap.push(pair<long,int>(5L,5));
        int ugly=1;
        for(int i=1;i<n;i++){
            pair<long,int> tmp=minheap.top();
            minheap.pop();
            minheap.push(pair<long,int>(tmp.first*2,2));
            if(tmp.second>=3)minheap.push(pair<long,int>(tmp.first*3,3));
            if(tmp.second>=5)minheap.push(pair<long,int>(tmp.first*5,5));
            ugly=(int)tmp.first;
        }
        return ugly;
    }
};