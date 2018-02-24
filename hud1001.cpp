
#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	while(cin>>n){
		for(int i=1;i<=n;++i){
			sum+=i;
		}
		cout<<sum<<endl;
		cout<<endl;
	}
	return 0;
}


