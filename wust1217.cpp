#include <iostream>

using namespace std;

long cope(int n) {
  if (n == 0)
    return 1;
  long sum = 1;
  for (int i = 1; i <= n; ++i) {
    sum *= i;
  }
  return sum;
}
int main() {
  int n;
  while (cin >> n) {
    cout << cope(n) << endl;
    
  }
  return 0;
}