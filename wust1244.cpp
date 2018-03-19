#include<iostream>

using namespace std;
void swap_(int &a,int &b) {
	int temp=a;
	a=b;
	b=temp;
}

void reverse(int *a,int start, int end) {
	int j=0;
	for(int i=start; i<=(end+start)/2; ++i)
		swap(a[i],a[end-j++]);
}
int main() {
	int n,k;
	while(cin>>n>>k) {
		int a[n];
		for(int i=0; i<n; ++i)cin>>a[i];
		reverse(a,0,n-1);
//		for(int j=0; j<n; ++j)cout<<a[j]<<" ";
//		cout<<endl;
		reverse(a,0,n-k-1);
//		for(int j=0; j<n; ++j)cout<<a[j]<<" ";
//		cout<<endl;
		reverse(a,n-k,n-1);
		for(int j=0; j<n-1; ++j)cout<<a[j]<<" ";
		cout<<a[n-1]<<endl;
	}
	return 0;
}
