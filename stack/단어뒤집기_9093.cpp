#include <iostream>
using namespace std;

struct Stack {
  char data[10000];
  int size;

  Stack() { size = 0; }

  void push(int num) {
    data[size] = num;
    size += 1;
  }

  bool empty() {
    if (size == 0) {
      return true;
    } else {
      return false;
    }
  }

  char top() {
    if (empty()) {
      return -1;
    } else {
      return data[size - 1];
    }
  }

  char pop() {
    if (empty()) {
      return -1;
    } else {
      size -= 1;
      return data[size];
    }
  }
};

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string str;
    getline(cin, str);
    str += '\n';
    Stack s;
    for (char ch : str) {
      if (ch == ' ' || ch == '\n') {
        while (!s.empty()) {
          cout << s.top();
          s.pop();
        }
        cout << ch;
      } else {
        s.push(ch);
      }
    }
  }
  return 0;
}