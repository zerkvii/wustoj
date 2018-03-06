#include <iostream>

using namespace std;
long long cope(int n,int x){
    if(x==0)return 1;
    long long sum=1;
    for(int i=1;i<=x;++i){
        sum*=n;
    }
    return sum;
}
int main() {
  int n, x;
  while (cin >> n >> x) {
    cout << cope(n, x) << endl;
  }

  return 0;
}