#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

class Solution {
public:
    int sumNums(int n) {
        n && (n+=sumNums(n-1));
        return n;
    }
};