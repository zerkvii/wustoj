#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void cope(double x) {
    double sum = 0, k = 1.0, i = 1.0, re = 1.0;
    while (k >= pow(0.1, 6)) {
        sum += k;
        k = pow(x, i++) / re;
        re *= i;
    }
    cout << fixed << setprecision(6) << sum << endl;
}

int main() {
    double n;
    while (cin >> n) {
        cope(n);
    }
    return 0;
}