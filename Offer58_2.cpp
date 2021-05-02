#include<iostream>
using namespace std;
class Solution {
public:
    //method one:4ms-8ms
    string reverseLeftWords(string s, int n) {
        string s1 = s.substr(0,n);
        string s2 = s.substr(n,s.size());
        return s2+s1;
    }
};