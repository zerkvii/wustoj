#include<iostream>
#include<cstring>
#include<sstream>
#include<cstdlib>
using namespace std;

void e2c(char a) {

	switch(a) {
		case '0': {
			cout<<"ling";
			break;
		}
		case '1': {
			cout<<"yi";
			break;
		}
		case '2': {
			cout<<"er";
			break;
		}
		case '3': {
			cout<<"san";
			break;
		}
		case '4': {
			cout<<"si";
			break;
		}
		case '5': {
			cout<<"wu";
			break;
		}
		case '6': {
			cout<<"liu";
			break;
		}
		case '7': {
			cout<<"qi";
			break;
		}
		case '8': {
			cout<<"ba";
			break;
		}
		case '9': {
			cout<<"jiu";
			break;
		}
		default: {
			break;
		}
	}
}
int main() {
	char s[101];
	int sum;

	while(cin>>s) {
			sum=0;
		for(int i=0; i<strlen(s); ++i) {
			sum+=s[i]-'0';
		}
		char re[10];
		sprintf(re,"%d",sum);
		for(int j=0; j<strlen(re)-1; ++j) {
			e2c(re[j]);
			cout<<" ";
		}
		e2c(re[strlen(re)-1]);
		cout<<endl;
	    memset(s,'0',sizeof(s));
	}
	return 0;
}
