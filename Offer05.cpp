#include<iostream>
#include<string>

using namespace std;

string replaceSpqce(string s) {
	int count = 0;
	int length = s.size();
	for (char c : s) {
		if (c == ' ')count++;
	}
	s.resize(length + count * 2);
	for (int i = length - 1, j = s.size() - 1; i >= 0; i--, j--) {
		if (s[i] != ' ') {
			s[j] = s[i];
		}
		else {
			s[j] = '0';
			s[j - 1] = '2';
			s[j - 2] = '%';
			j -= 2;
		}
	}
	return s;
}