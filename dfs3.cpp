#include <iostream>

using namespace std;
int item[3] = {1, 2, 5};
int count = 0;


void dfs(int sum, int r, const int *a) {
	if (sum == 10) {
		count++;
		for (int j = 0; j < 3; ++j)cout << a[j] << ",";
		cout << endl;
		return;
	}
	if (sum <10) {
		for (int i = r; i < 3; ++i) {
				a[i]++;
				dfs(sum+item[i],i,a);
		}
	}
}

int main() {
	int a[3] = {0, 0, 0};
	dfs(0, 0,a);
	cout << "count= " << count << endl;
	system("PAUSE");
	return 0;
}

