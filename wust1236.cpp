#include<iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; ++i) {
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int j=0; j<n; ++j)
			for(int k=0; k<m; ++k)
				cin>>a[j][k];
		int p,q;
		for( p=0; p<m; ++p) {
			for(q=0; q<n-1; ++q)
				printf("%3d ",a[q][p]);
			printf("%3d\n",a[q][p]);
		}

	}
	return 0;
}

