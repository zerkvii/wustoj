#include<iostream>

using namespace std;
int item[3]= {1,2,5};
int count=0;
void dfs(int sum,int range) {

	if(sum==10) {
		count++;
		return;
	} else if(sum<10) {

		for(int i=range; i<3; ++i) {
			sum=sum+item[i];
			dfs(sum,i);
		}
	}
}

int main() {
	dfs(0,0);
	cout<<count<<endl;
	return 0;
}
