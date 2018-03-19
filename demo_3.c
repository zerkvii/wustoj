#include<stdio.h>
int main() {
	//注释部分用于显示因子
//	int c=0,temp[500];
	int i,j;
	for( i=2; i<=1000; i++) {
		int sum=1;
		for( j=2; j<=i/2; j++) {
			if(i%j==0) {
				sum+=j;
//				temp[c++]=j;
			}
		}
		if(sum==i) {
			printf("%d\n",i);
		}
	}
}
