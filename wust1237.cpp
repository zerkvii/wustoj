#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

long long mishu(int j)
{
    long long res = 1;
    for(;j>0;j--)
    {
        res *= 8;
    }
    return res;
}

int main() {
 int i,j,k,m;
    long long n;
    while(scanf("%d",&m)!=EOF)
    {
        for(k=0;k<m;k++)
        {
            n=0;
            char s[40];
            scanf("%s",s);
            for(i=strlen(s)-1,j=0;i>=0;i--,j++)
            {
                n += (s[i]-'0')*mishu(j);
            }
            printf("%lld\n",n);    
        }        
    }    
    return 1;
}
