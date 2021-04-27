/*
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        vector<int>count(128,0);
        for(char c:s){
            count[c]++;
        }
        for(char c:s){
            if(count[c]==1)return c;
        }
        return ' ';
    }
};
*/