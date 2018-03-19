#include<iostream>

using namespace std;
//typedef struct node {
//	node* next;
//	int data;
//}*linkedlist;
int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; ++i) {
		int n,k;
		cin>>n>>k;
//		linkedlist l;
		node  *p,*q;
		p=l;
		q=l;
		for(int j=1; j<=n; ++j) {
			p->data=j;
			p=p->next;
		}
		p->next=q;
		int res;
		while(q->next!=q) {
			for(int step=1; step<k; ++step) {
				q=q->next;
			}
			res=q->next->data;
			q=q->next->next;
		}
		cout<<res<<endl;
	}
	return 0;
}
