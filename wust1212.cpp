#include <iostream>


using namespace std;
//欧几里德算法
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
int main() {
    int m, n;
    while (cin >> m >> n) {
        int gc = gcd(m, n);
        int lc = m / gc * n;
        cout << gc << " " << lc << endl;
    }
    return 0;
}