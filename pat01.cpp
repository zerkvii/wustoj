#include<iostream>

using namespace std;

int count=0;
void clz(int n){
	if(n==1)return; 
	if(n%2==0){
		count++;
		clz(n/2);
	}else{
		count++;
		clz((3*n+1)/2);
	}
	
	
}
int main(){
	int n;
	while(cin>>n){	
		count=0;
		clz(n);
		cout<<count<<endl;
	}
	
	return 0;
}
