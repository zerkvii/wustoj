#include <iostream>

using namespace std;

int main() { 
    int num;
    while(cin>>num){
       int count=0;
       while(num!=1){
           if(num%2==0){
               num=num/2;
               count++;
           }else{
               num=3*num+1;
               count++;
           }
       }
       cout<<count<<endl;
    }
    return 0; }