#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double cope(int num,double x) {
	if(num==1) {
		return sqrt(x+num);
	} else
		return sqrt(num+cope(num-1,x));
}

int main() {
	int	n;
	cin>>n;
	int num;
	double x;
	while(cin>>num>>x) {
		cout<<fixed<<setprecision(3)<<cope(num,x)<<endl;
	}
	return 0;
}
