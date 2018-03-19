#include<iostream>

using namespace std;

int main() {
	int a[40][40];
	int n;
	while(cin>>n) {
		for(int i=1; i<=n; ++i) {
			a[i][i]=1;
			a[i][1]=1;
			for(int j=2; j<i; ++j) {
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		int i,j,k;
		for( i=1; i<=n; ++i) {
			for( k=1; k<=n-i; ++k)
				printf("  ");
			for( j=1; j<i; ++j) {
				printf("%3d ",a[i][j]);
			}
				printf("%3d",a[i][j]);

			printf("\n");
		}
		printf("\n");

	}
	return 0;
}

