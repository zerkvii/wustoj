#include<iostream>
#include<string>
using namespace std;

void sort(string &s) {

	for(int i=0; i<s.size(); ++i) {
		for(int j=0; j<i; ++j) {
			if(s[j]>s[i])swap(s[i],s[j]);
		}
	}
}
int main() {
	string s;
	while(cin>>s) {
		sort(s);
		cout<<s<<endl;
	}
	return 0;
}
