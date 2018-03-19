#include<iostream>

using namespace std;

bool is_leap_year(int y) {
	if(y%4==0&&y%100!=0)return true;
	if(y%400==0)return true;
	else return false;
}
int get_days(int m) {
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)return 31;
	else if(m==2)return 28;
	else return 30;
}
int get_leap_days(int m) {
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)return 31;
	else if(m==2)return 29;
	else return 30;
}

void back_date(int y,int day) {

	int sum=0;
	int temp=0;
	int gap=0;
	int m=0;
	for(int i=1; i<=12; ++i) {
		m=i;
		if(is_leap_year(y))
			temp=get_leap_days(i);
		else
			temp=get_days(i);
		gap=day-sum;
		if(gap<=temp)break;
		else sum+=temp;
	}
	printf("%d/%02d/%02d\n",y,m,gap);

}

void back_day(int y,int m,int d) {
	int sum=0;
	for(int i=1; i<m; ++i) {
		int temp=0;
		if(is_leap_year(y))
			temp=get_leap_days(i);
		else temp=get_days(i);
		sum+=temp;
	}
	printf("%d\n",sum+d);

}


int main() {
	int n;
	while(cin>>n) {
		if(n==1) {
			int y,m,d;
			cin>>y>>m>>d;
			back_day(y,m,d);
		} else {
			int y,d;
			cin>>y>>d;
			back_date(y,d);
		}
	}
	return 0;
}
