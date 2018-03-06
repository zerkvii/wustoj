#include <iostream>

using namespace std;

void cope(int x, int n) {
  long long sum = 0;
  if (n == 0) {
    cout << 1 << endl;
    return;
  }
  long long contemp=1;
  for (int i = 1; i <= n; i++) {
      contemp=contemp*x;
      sum+=contemp;
  }
  cout<<sum<<endl;
}

int main() {
  int x, n;
  while (cin >> x >> n) {
    cope(x, n);
  }
  return 0;
}