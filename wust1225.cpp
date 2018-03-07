#include <iomanip>
#include <iostream>


using namespace std;

int main() {
  int n;
  while (scanf("%d",&n)!=EOF) {
    if(n<=15){
    double sum = 0;
    long long fact = 1;
    for (long i = 1; i <= n; ++i) {
      fact *= i;
      sum += 1.0 / fact;
    }
    printf("%.6lf\n",sum);
    
    // cout << fixed << setprecision(6) << sum << endl;
    }else 
    // cout<<1.718282<<endl;
    printf("1.718282\n");
  }
  return 0;
}