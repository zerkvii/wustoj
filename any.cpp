#include <stdio.h>
void k(int n, char a,char b,char c);
int i=0;
int main()
{int n=8;
 while(scanf(" %d",&n)!=EOF){
  i=0;
    k(n, 'A', 'B', 'C');
    printf("\n");
}}
void k(int n, char a, char b, char c)
{
   if (n == 1)
    {i++;
	printf("Case #%d: from %c to %c.\n",i,a,c);
     }
    else
    { k(n - 1, a, c, b);
       i++;
	printf("Case #%d: from %c to %c.\n",i,a,c);
        k(n - 1, b, a, c);
    }
}