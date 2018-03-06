#include <iostream>
#include <stack>
using namespace std;

char oper[1000];
int num[1000];

int back_oper_val(char c) {
  switch (c) {
  case '+': {
    return 1;
    break;
  }
  case '-': {
    return 2;
    break;
  }
  case '*': {
    return 3;
    break;
  }
  case '/': {
    return 4;
    break;
  }
  case '=': {
    return 0;
    break;
  }
  default: {
    return 99;
    break;
  }
  }
}
int main() {
  stack<int> ins;
  stack<int> oper;
  int nu;
  char op;
  while (cin >> nu >> op) {
      ins.push(nu);
    int temp = back_oper_val(op);
    if (temp != 0) {
      if (oper.empty()) {
        oper.push(temp);
      }else{
          if(temp>oper.top()){
              oper.push(temp);
          }else{
              int cu1=ins.top();
              ins.pop();
              int cu2=ins.top();
              ins.pop();
              cope()
          }
      }
    }
  }
  return 0;
}