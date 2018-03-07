#include <iostream>
#include <string>
using namespace std;

int main() {

 string s;
 while(cin>>s){
     if(s.size()>1){
         for(int i=0;i<s.size()-1;++i){
             cout<<"'"<<s[i]<<"',";

         }
         cout<<"'"<<s[s.size()-1]<<"'"<<endl;
     }else{
         cout<<"'"<<s<<"'"<<endl;
     }
 }
}
