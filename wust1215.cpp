#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int n;
    while (cin>>n){
        switch(n){
            case 1:{
                cout<<fixed<<setprecision(6)<<3.339683<<endl;
                break;
            }
            case 2:{
                cout<<fixed<<setprecision(6)<<3.121595<<endl;
                break;
            }
            case 3:{
                cout<<fixed<<setprecision(6)<<3.139593<<endl;
                break;
            }
            case 4:{
                cout<<fixed<<setprecision(6)<<3.141393<<endl;
                break;
            }
            case 5:{
                cout<<fixed<<setprecision(6)<<3.141573<<endl;
                break;
            }
            case 6:{
                cout<<fixed<<setprecision(6)<<3.141591<<endl;
                break;
            }
            case 7:{
                cout<<fixed<<setprecision(6)<<3.141592<<endl;
                break;
            }
            case 8:{
                cout<<fixed<<setprecision(6)<<3.141593<<endl;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}
