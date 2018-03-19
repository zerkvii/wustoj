#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; ++i) {
		char s[20];
		scanf("%s",&s);
		int len=strlen(s);
		int dot,ep,mov;
		for(int i=0; i<len; ++i) {
			if(s[i]=='.') {
				dot=i;
				for(int j=i; j<len; ++j) {
					if(s[j]=='e'||s[j]=='E') {
						ep=j;
						char temp[20];
						memcpy(temp,s+j+1,len-j-1);
						temp[len-j-1]='\0';
//						cout<<"e"<<temp<<endl;
						mov=atoi(temp);
						break;
					}
				}
				break;
			}
		}
//		cout<<mov<<" "<<endl;
//		cout<<ep-dot-1<<" "<<endl;
		int po=ep-dot-1-mov;
		if(po<0)po=0;
		cout<<fixed<<setprecision(po)<<atof(s)<<endl;
	}
	return 0;
}
