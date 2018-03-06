#include <iostream>

using namespace std;

void cope(int n) {
  int sum = n / 3;
  int res = n % 3;
  if (res != 0) {
    cout << "no" << endl;
    return;
  }
  char s[10];
  bool flag=false;
  sprintf(s, "%d", n);
  for (int i = 0; i < 9; ++i) {
    if (s[i] == '5')
     flag=true;
  }
  if(flag)cout<<"yes"<<endl;
  else cout<<"no"<<endl;
}
int main() {
  int n;
  while (cin >> n) {
    cope(n);
  }
  return 0;
}