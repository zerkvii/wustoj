#include<iostream>

using namespace std;

void perfect(int n) {
	int sum=0;
	for(int j=1; j<n; ++j) {
		if(n%j==0)sum+=j;
	}
	if(sum==n)cout<<n<<"ÊÇÍêÊý"<<endl;
}

int main() {
	for(int i=2; i<=1000; ++i) {
		perfect(i);
	}
	return 0;
}
