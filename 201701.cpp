#include<iostream>

using namespace std;
int sum=1;

int dfs(int day) {
	if(day==1)return sum;
	else {
		sum=(sum+1)*2;

		day--;
		cout<<"µÚ"<<day<<"ÌìÓĞ"<<sum<<endl;
		return dfs(day);
	}
}

int main() {

	cout<<dfs(10)<<endl;
	return 0;
}
