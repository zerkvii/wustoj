#include <stdio.h>
#include <string.h>
void sort(char * str[],int size) {
	int i,j;
	char * tmp;
	for(i=0; i<size-1; i++) {
		for(j=i+1; j<size; j++) {
			if(strcmp(str[i],str[j])>0) {
				tmp=str[i];
				str[i]=str[j];
				str[j]=tmp;
			}
		}
	}
}

void main() {
	char str[100][1000];
	char * p[100];
	int i,n;
	while(scanf("%d",&n)!=EOF) {
		for(i=0; i<n; i++) {
			scanf("%s",str[i]);
			p[i]=str[i];
		}
		sort(p,n);
		for(i=0; i<n; i++)
			printf("%s\n",p[i]);
	}
}
