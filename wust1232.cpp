#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; ++i) {
		int N,M,P;
		cin>>N>>M>>P;
		int a[N][M];
		int b[M][P];
		for(int p=0; p<N; ++p)
			for(int q=0; q<M; ++q)
				scanf("%d",&a[p][q]);
		for(int p=0; p<M; ++p)
			for(int q=0; q<P; ++q)
				scanf("%d",&b[p][q]);
		for(int j=0; j<N; ++j) {

			for(int k=0; k<P; ++k) {
				int temp=0;
				for(int l=0; l<M; ++l) {
					temp+=a[j][l]*b[l][k];
				}
				printf("%6d",temp);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
