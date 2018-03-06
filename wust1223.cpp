// #include <iostream>
// using namespace std;

// void k(int n, char a, char b, char c);
// int i = 0;
// int main() {
//   int n = 8;
//   while (cin >> n) {
//     i = 0;
//     k(n, 'A', 'B', 'C');
//   }
//   return 0;
// }
// void k(int n, char a, char b, char c) {
//   if (n == 1) {
//     i++;
//     cout << "Case #" << i << ": from " << a << " to " << c << endl;
//     // printf("Case #%d: from %c to %c.\n", i, a, c);
//   } else {
//     k(n - 1, a, c, b);
//     i++;
//     cout << "Case #" << i << ": from " << a << " to " << c << endl;
//     // printf("Case #%d: from %c to %c.\n", i, a, c);
//     k(n - 1, b, a, c);
//   }
// }

#include <iostream>

void TowersofHanoi(int n, char x, char y, char z,int &count);
void TowersofHanoi(int n, char x, char y, char z,int &count) {

  if (n) {
    TowersofHanoi(n-1,x,z,y,count);//将n-1个盘子从x移动到z
    // cout << "Case #" << count << ": ";
    count++;
    // cout << "from " << x << " to " << y << "." << endl; //将第n个盘子移动到y
      printf("Case #%d: from %c to %c.\n",count ,x,y);
    // printf("Case #%d: from %c to %c.\n", count, x, y);
     TowersofHanoi(n-1,z,y,x,count);//将z上的盘子移动到y
  }
} 

int main() {
  int num;
  while (scanf(" %d", &num) != EOF) {
      int count=0;
    TowersofHanoi(num, 'A', 'C', 'B',count);
    printf("\n");
  }
  return 0;
}
