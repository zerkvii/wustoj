#include <iostream>
#include <string>
#include <cstring>
using namespace std;


bool is_length(string s) {
	if (s.size() < 10)return false;
	else return true;
}

bool is_Word(string s) {
	if (s[0] <= 'Z' && s[0] >= 'A')return true;
	else if(s[0]<='z'&&s[0]>='a') return true;
	else return false;
}

bool has_star(string s) {

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '*')return false;
	}
	return true;
}

bool has_repeat_number(string s) {
	char pre = s[0];
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			if (s[i] == pre)return false;
			else pre = s[i];
		}
	}
	return true;

}
int main() {

	string s;
	while (cin >> s) {
		if(is_Word(s)&&is_length(s)&&has_star(s)&&has_repeat_number(s))
			cout<<s<<" 是合法用户名"<<endl;
		else cout<<s<<" 不是合法用户名"<<endl;
	}
	return 0;
}
