#include<iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; ++i) {
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int j=0; j<n; ++j) {
			for(int k=0; k<m; ++k) {
				scanf("%d",&a[j][k]);
			}
		}
		bool flag=false;
		for(int j=0; j<n; ++j) {
			for(int k=0; k<m; ++k) {
				int num=a[j][k];
				bool f1=true;
				bool f2=true;
				for(int l=0; l<n; ++l)
					if(num>a[l][k]) {
						f1=false;
						break;
					}

				for(int p=0; p<m; ++p)
					if(num<a[j][p]) {
						f2=false;
						break;
					}
				if(f1&&f2){
					printf("%d %d %d\n",num,j+1,k+1);
//					cout<<num<<" "<<j+1<<" "<<k+1<<endl;
					flag=true;
				}

			}
		}
		if(!flag)printf("404 not found\n");

	}
	return 0;
}
