#include <iostream>

using namespace std;
int item[3] = {1, 2, 5};
int count = 0;
void dfs(int sum, int range,int *a) {
	int p[3];
	for(int i=0;i<3;++i)p[i]=a[i];
	if (sum == 100) {
		for (int j = 0; j < 3; ++j)cout << p[j] << ",";
		cout<<endl;
		count++;
		p[range]--;
		return;
	} else if(sum<100) {
		for (int i = range; i < 3; ++i) {
			p[i]++;
			dfs(sum + item[i], i,p);
		}
	}else{
		p[range]--;
		p[range-1]--;
		return;
	}

}

int main() {
	int a[3]={0,0,0};
	dfs(0, 0,a);
	cout << count << endl;
	system("PAUSE");
	return 0;
}
