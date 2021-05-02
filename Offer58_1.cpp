#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;


class Solution {
public:
    vector<string> split(const string& str,const string& delim){
        vector<string>ans;
        if(str=="")return ans;
        char* strs = new char[str.length()+1];
        strcpy(strs,str.c_str());

        char* d = new char[delim.length()+1];
        strcpy(d,delim.c_str());

        char*p = strtok(strs,d);
        while(p){
            string s=p;
            ans.push_back(s);
            p = strtok(NULL,d);
        }
        return ans;
    }
    string reverseWords(string s) {
        if(s=="")return s;
        vector<string>res = split(s," ");
        string ans="";
        for(int i=0;i<res.size();i++){
            string tmp = res[i]+" ";
            ans = tmp+ans;
        }
        return ans;
    }
};