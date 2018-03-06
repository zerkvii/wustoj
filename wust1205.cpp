#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void cope(double a,double b,double c){
	double delt=b*b-4*a*c;
	if(delt==0)cout<<fixed<<setprecision(6)<<-b/(2*a)<<endl;
	else if(delt<0)cout<<-1<<endl;
	else{
		cout<<fixed<<setprecision(6)<<(-b+sqrt(delt))/(2*a)<<" "<<(-b-sqrt(delt))/(2*a)<<endl;
	}
	
}


int main(){
	double a,b,c;
	while(cin>>a>>b>>c){
		if(a==0&&b==0&&c==0)break;
		cope(a,b,c);
	}
	
	return 0;
}
