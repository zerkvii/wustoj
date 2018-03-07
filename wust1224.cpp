#include <iomanip>
#include <iostream>
#include<cmath>

using namespace std;

void cope(double a, double b, double c) {
  if ((a + b > c) && (a + c > b) && (b + c > a))
  {
    double d = a + b + c;
    double s = 0.5 * d;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << fixed << setprecision(3) << area
         << endl; //'\t'�������λ�ã�ʹ����������������롢����
  }
  else
  {
    cout << "No!" << endl;
  }
}

int main() {
  double a, b, c;
  while (cin >> a >> b >> c) {
    cope(a, b, c);
  }
  return 0;
}