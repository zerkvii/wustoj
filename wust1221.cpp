#include <iostream>

using namespace std;

void print_time(int hour, int m, int s) {
  if (hour < 10)
    cout << "0" << hour << ":";
  else
    cout << hour << ":";
  if (m < 10)
    cout << "0" << m << ":";
  else
    cout << m << ":";
  if (s < 10)
    cout << "0" << s;
  else
    cout << s;
  cout << endl;
}

void cope(int num) {

  int hour = num / 3600;
  int res = num % 3600;
  int minutes = res / 60;
  int secs = res % 60;
  hour = hour % 24;
  print_time(hour, minutes, secs);
}
int main() {
  int num;
  while (cin >> num) {
    cope(num);
  }
  return 0;
}
