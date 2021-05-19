#include<iostream>
using namespace std;
class Solution {
public:
    bool isNumber(string s) {
        int l =0,r=s.size()-1;
        while(l<s.size()&&s[l]==' ')l++;
        if(l==s.size())return false;
        while(r>=0&s[r]==' ')r--;
        if(l>r)return false;
        s = s.substr(l,r-l+1);
        for(l=0;l<s.size();l++){
			if(s[l]=='e'||s[l]=='E')break;
		}
		if(l<s.size()){
			if(!isInteger(s.substr(0,l)) && !isDecimal(s.substr(0,l))) return false;
			if(!isInteger(s.substr(l+1,s.size())))return false;
		}else{
			if(!isInteger(s) && !isDecimal(s)) return false;
		}
        return true;
    }
    bool isInteger(string s) {
	if (s.empty())return false;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0 && (s[i] == '+' || s[i] == '-')){
			if(i==s.size()-1)return false;
			else continue;
		}
		if (s[i] > '9' || s[i] < '0')return false;
	}
	return true;
    }
    bool isDecimal(string s) {
		bool flag = true;
	    if (s.empty())return false;
	    if (s[0] == '+' || s[0] == '-'){
			if(s.size()==1)return false;
			else s = s.substr(1, s.size());
		} 
		if (s.empty())return false;
	    for (int i = 0; i < s.size(); i++) {
		    if (s[i] == '.' && flag) {
				flag=false;
			    if (i == 0) {
				    if (i == s.size() - 1 || (s[i + 1] > '9' || s[i + 1] < '0'))return false;
		    	}
			    else if (i == s.size() - 1) {
				    if(i == 0 || (s[i - 1] > '9' || s[i - 1] < '0')) return false;
			    }
			    else {
				    if ((s[i + 1] > '9' || s[i + 1] < '0') || (s[i - 1] > '9' || s[i - 1] < '0'))
					    return false;
			    }
		    }
		    else {
			    if (s[i] > '9' || s[i] < '0')return false;
		    }
	    }
	    return true;
    }
};