#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

bool judge(int n) {
	char s[10];
	sprintf(s,"%d",n);
	char pre=s[0];
	for(int i=1; i<strlen(s); ++i) {
		if(pre==s[i]) {
			return false;
		} else {
			pre=s[i];
		}
	}
	return true;
}

int main() {
	int n;
	while(cin>>n) {
		for(int i=n+1; i<=101010; ++i) {
			if(judge(i)) {
				cout<<"大于"<<n<<"的最小不重复数是"<<i<<endl;
				break;
			}
		}
		return 0;
	}
}
