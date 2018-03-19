#include<iostream>
#include<cstring>
int n,tmp;
int map[11];

void DFS(int k) {
	int i,j,flag;
	if(k==n+1) {
		tmp++;
		return;
	} else {
		for(i=1; i<=n; ++i) {
			map[k]=i;
			flag=1;
			for(j=1; j<k; ++j) {
				if(map[j]==i||i-k==map[j]-j||i+k==map[j]+j) { // ע��1��i=map[k]  2������ͬһ��б�ߵ�����ĺ������б굽�Խ��ߵĵľ��벻���
					flag=0;
					break;
				}
			}
			if(flag)
				DFS(k+1);
		}
	}
}

int main() {
	int i,m;
	int ans[11];
	for(n=1; n<=10; ++n) {
		tmp=0;
		DFS(1);
		ans[n]=tmp;
	}
	while(scanf("%d",&m),m) {
		printf("%d\n",ans[m]);
	}
	return 0;
}
