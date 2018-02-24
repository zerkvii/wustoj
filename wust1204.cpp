#include <iostream>

using namespace std;

int main() {
    unsigned short x, m, n;
    while(cin >> x >> m >> n) {
        x = x >> m;//将x右移m位去除低m位数据
        x = x << (16 - n);//去除高 16-m-n位，并想15位靠齐;
        cout << x << endl;
    }
    return 0;
}