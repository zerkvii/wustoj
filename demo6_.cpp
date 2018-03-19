#include <iostream>

using namespace std;
int item[3] = {1, 2, 5};
int count = 0;


void dfs(int sum, int r, int a,int b,int c) {

	if (sum == 100) {
		count++;
		cout<<a<<" "<<b<<" "<<c;
		cout << endl;
		return;
	}
	if (sum <100) {
		for (int i = r; i < 3; ++i) {
			if(i==0) {
				dfs(sum+item[i], i, a+1,b,c);
			} else if(i==1) {
				dfs(sum+item[i], i, a,b+1,c);
			} else {
				dfs(sum+item[i], i, a,b,c+1);
			}
		}
	}
}
int main() {
	int a=0,b=0,c=0;
	dfs(0,0,0,0,0);
	cout << "count= " << count << endl;
	system("PAUSE");
	return 0;
}
