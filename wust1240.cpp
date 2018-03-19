#include<iostream>

using namespace std;

int judge(char *a,char *b) {
	int i=0;
	while(*(a+i)==*(b+i)) {
		if(*(a+i++)=='\0')
			return 0;
	}

	if(*(a+i)>*(b+i)) return 1;
	else return -1;

}

int main() {
	char a[100],b[100];
	while(cin>>a>>b) {
		cout<<judge(a,b)<<endl;
	}
	return 0;
}
