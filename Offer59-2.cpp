#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
class MaxQueue {
private:
    queue<int> qq;
    deque<int> dq;
public:
    MaxQueue() {

    }
    
    int max_value() {
        if(qq.empty())return -1;
        return dq.front();
    }
    
    void push_back(int value) {
        while(!dq.empty() && dq.back()<value)dq.pop_back();
        dq.push_back(value);
        qq.push(value);
    }
    
    int pop_front() {
        if(qq.empty())return -1;
        int ans = qq.front();
        if (ans == dq.front()) {
            dq.pop_front();
        }
        qq.pop();
        return ans;

    }
};
