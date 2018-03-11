#include <iostream>

using namespace std;

bool judge(int a) {
	if(a==2)return true;
	for(int i=2; i<a; ++i) {
		if (a%i==0)return false;
	}
	return true;
}

int main() {
	int n;
	while(cin>>n) {
		for(int i=2; i<n; ++i) {
			if(judge(i)&&judge(n-i)) {
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
	}
}
