#include<iostream>

using namespace std;


int main() {
	int n;
	cout<<"输入数组长度\n";
	cin>>n;
	cout<<"输入数组的值以空格结尾\n"<<endl;
	int a[n];
	for(int i=0; i<n; ++i)
		cin>>a[i];
	cout<<"输入要查询的数\n"<<endl;
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
		if(count==0)cout<<"不存在"<<endl;
		else {
			cout<<endl;
			cout<<"上面是出现位置，出现次数一共为"<<count<<endl;
		}
	}
}
