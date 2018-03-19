#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double x;
	while(cin>>x) {
		if(x>0) {
			double top_math=sqrt(x)+exp(x);
			double bottom_math=5*x+5;
			cout<<top_math/bottom_math<<endl;
		}else{
			double left_math=2.0/3+sqrt(3)/2.0;
			double right_math=fabs(x);
			cout<<left_math*right_math<<endl;	
		}
	}
	return 0;
}
