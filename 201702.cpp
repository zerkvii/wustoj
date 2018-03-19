#include<iostream>

using namespace std;
 int sum=1;
 int fac(int n){
 	if(n==1)return 1;
 	if(n==2)return 1;
 	else return fac(n-2)+fac(n-1);
 	
 }

int main(){
	int n;
	while(cin>>n){
		sum=1;
		cout<<"第"<<n<<"个月的兔子数量为"<<fac(n)<<endl;
	}
	return 0;
}
