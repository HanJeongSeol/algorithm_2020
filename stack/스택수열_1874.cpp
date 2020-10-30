#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<int> s;
  string result;
  int m = 0;
  int t;

  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    if (n > m) {
      while (n > m) {
        s.push(++m);
        result += '+';
      }
      s.pop();
      result += '-';
    } else {
      bool c = false;
      if (!s.empty()) {
        int top = s.top();
        s.pop();
        result += '-';
        if (top == n) {
          c = true;
        }
      }
      if (!c) {
        printf("NO");
        return 0;
      }
    }
  }

  for (auto a : result) {
    printf("%c\n", a);
  }
  return 0;
}

/*
    스택에 1부터 N까지의 숫자를 넣을 수 있을 때
    주어진 수열을 push / pop을 이용하여 만들 수 있는지 확인하는 문제이다.
    N : 8
*/
