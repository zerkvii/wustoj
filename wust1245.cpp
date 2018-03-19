#include<iostream>

using namespace std;

int main() {

	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF) {
		int a[n][m];
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j)
				scanf("%d",&a[i][j]);
		for(int p=0; p<m; ++p) {

			for(int q=0; q<n-1; ++q)
				printf("%d ",a[q][p]);
				printf("%d\n",a[n-1][p]);
		}
	}
	return 0;
}
