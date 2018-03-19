#include<iostream>

using namespace std;
//bool flag=true;
//void cope(int n,int r) {
//	if(flag) {
//		if(n==1) {
//			return;
//			flag=false;
//		} else if(n>1) {
//			for(int i=r; i<n-1; ++i) {
//				if(n%i==0) {
//					cout<<"*"<<i;
//					cope(n/i,r);
//				}
//			}
//		}
//	}
//}

int main() {
	int n;

	while(cin>>n) {
		int r=2;
		cout<<n<<"=";
		while(n!=1) {
			if(n%r==0) {
				if(n/r!=1)
					cout<<r<<"*";
				else cout<<r<<endl;
				n=n/r;
			} else {
				r++;
			}
		}
//		cope(n,2);
//		cout<<endl;
	}
	return 0;
}
