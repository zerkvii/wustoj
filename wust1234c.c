#include<stdio.h>
#include<string.h>

int main() {
	int i,t,x,y,a[10015];
	scanf("%d",&t);
	for(i=0; i<t; i++) {
		memset(a,0,sizeof(a));
		scanf("%d%d",&x,&y);
		int num=x,j,k;
		for(j=1; j<=x; j++)
			a[j]=1;
		k=0;
		for(j=0;; j++) {

			if(a[j%x+1]) {
				k++;
				if(k%y==0) {
					if(num==1)
						break;
					a[j%x+1]=0;
					num--;
				}
			}
		}
		printf("%d\n",j%x+1);
	}
	return 0;
}
