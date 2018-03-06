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
