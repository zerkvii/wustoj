#include <iostream>

void TowersofHanoi(int n, char x, char y, char z,int &count);
void TowersofHanoi(int n, char x, char y, char z,int &count) {

if(n==1)printf("Case #%d: from %c to %c.\n", count, x, z);
else{
TowersofHanoi(n - 1, x, z, y,count);
count++;
printf("Case #%d: from %c to %c.\n", count, x, z);
TowersofHanoi(n - 1, y, x, z,count);
}
//   if (n) {
//     TowersofHanoi(n - 1, x, y, z); //将n-1个盘子从x移动到y
//     // cout << "Case #" << count << ": ";

//     count++;
//     // cout << "from " << x << " to " << y << "." << endl; //将第n个盘子移动到y
//     printf("Case #%d: from %c to %c.\n", count, x, z);
//     TowersofHanoi(n - 1, y, z, x); //将y上的盘子移动到z
//   }
} 

int main() {
  int num;
  while (scanf(" %d", &num) != EOF) {
      int count=1;
    TowersofHanoi(num, 'A', 'B', 'C',count);
  }
  return 0;
}
