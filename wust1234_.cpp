#include<iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; ++i) {
		int n,k;
		cin>>n>>k;
		if(k==1) {
			cout<<n<<endl;
		} else {
			node *array=new node;
			array->data=1;
			array->next=array;
			node *p=array;
			for(int j=2; j<=n; ++j) {
				node *temp=new node;
				temp->data=j;
				temp->next=p;
				p->next=temp;
				p=p->next;
			}
			p->next=array;
			node *q=array;
			int res=0;
			while(q->next!=q) {
				for(int step=1; step<k-1; step++) {
					q=q->next;
				}
				q->next=q->next->next;
				q=q->next;
			}
			cout<<q->data<<endl;
		}
	}
	return 0;
}
