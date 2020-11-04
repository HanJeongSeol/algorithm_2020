#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(stack<char> &q) {
  while (!q.empty()) {
    cout << q.top();
    q.pop();
  }
}
int main() {
  stack<char> q;
  string s;
  ios_base::sync_with_stdio(false);
  getline(cin, s);
  bool check = false;
  for (auto ch : s) {
    if (ch == '<') {
      print(q);
      check = true;
      cout << ch;
    } else if (ch == '>') {
      check = false;
      cout << ch;
    } else if (check) {
      cout << ch;
    } else if (ch == ' ') {
      print(q);
      cout << ' ';
    } else {
      q.push(ch);
    }
  }
  print(q);
  return 0;
}