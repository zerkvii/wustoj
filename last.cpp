#include <iostream>


using namespace std;


void quicksort(int *a,int left,int right){

	if(left<right){
		int i=left,j=right,x=a[rand()%(right-left+1)+left];
		while(i<j){
			while(i<j&&a[j]>=x)j--;
			if(i<j)s[i++]=s[j];
			while(i<j&&a[i]<x)i++;
			if(i<j)s[j--]=s[i];
		}
		s[i]=x;
		quicksort(a,l,i-1);
		quicksorta,i+1,r);
	}

}