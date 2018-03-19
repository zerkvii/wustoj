#include <iostream>

using namespace std;
int item[3] = {1, 2, 5};

int count = 0;
void dfs(int sum, int range,int *a) {
//	cout<<sum<<endl;
	int p[3];
	for(int i=0; i<3; ++i)p[i]=a[i];
	if (sum == 100) {
		for (int j = 0; j < 3; ++j)cout << p[j] << ",";
		cout<<endl;
		count++;
		return;
	}
	if(sum<100) {
		for (int i = range; i < 3; ++i) {
			p[i]++;
//			sum=sum+item[i];
//			dfs(sum,i,p);
			dfs(sum+item[i],i,p);
		}
	}
}

int main() {
	int a[3]= {0,0,0};
	int x;
	for(x=0; x<2; x++) {
		dfs(0, x,a);
	}
	cout << count << endl;
	system("PAUSE");
	return 0;
}

