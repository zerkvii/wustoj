#include<iostream>

using namespace std;
int gcd(int a,int b){
    if(a<b)return gcd(b,a);
    while(a-b!=0){
        int temp=a-b;
        a=b;
        b=temp;
    }
    return b;
}

int main(){
   int n;
   cin>>n;

for(int i=0;i<n;++i){

    int a,c;
    char b;
    cin>>a>>b>>c;
    cout<<a<<b<<c<<endl;
}

    return 0;
}