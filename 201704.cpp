#include<iostream>

using namespace std;


int main() {
	int n;
	cout<<"�������鳤��\n";
	cin>>n;
	cout<<"���������ֵ�Կո��β\n"<<endl;
	int a[n];
	for(int i=0; i<n; ++i)
		cin>>a[i];
	cout<<"����Ҫ��ѯ����\n"<<endl;
	int t;
	int count;
	while(cin>>t) {
		count=0;
		for(int i=0; i<n; ++i) {
			if(a[i]==t) {
				cout<<i+1<<" ";
				count++;
			}
		}
		if(count==0)cout<<"������"<<endl;
		else {
			cout<<endl;
			cout<<"�����ǳ���λ�ã����ִ���һ��Ϊ"<<count<<endl;
		}
	}
}
