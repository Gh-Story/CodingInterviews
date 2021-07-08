#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = 1e9;
        int profit = 0;
        for(int num : prices){
            profit=max(profit,num-cost);
            cost=min(cost,num);
        }
        return profit;
    }
};