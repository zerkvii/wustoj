#include<iostream>

using namespace std;

int gcd(int m,int n){
	while(m!=n){
		if(m>n)m-=n;
		else n-=m;
	}
	return m;	
}

int main(){
	int m ,n;
	while(cin>>m>>n){
		int t= gcd(m,n);
		if(t==1)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
