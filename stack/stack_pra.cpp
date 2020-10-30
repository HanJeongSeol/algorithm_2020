/*
    구조체를 사용한 스택구현
*/

#include <iostream>
using namespace std;

struct Stack {
  int data[10000];
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

  int pop() {
    if (empty()) {
      return -1;
    } else {
      size -= 1;
      return data[size];
    }
  }
  int top() {
    if (empty()) {
      return -1;
    } else {
      return data[size - 1];
    }
  }
};

int main() {
  int n;
  cin >> n;

  Stack s;

  while (n--) {
    string cmd;
    cin >> cmd;
    if (cmd == "push") {
      int num;
      cin >> num;
      s.push(num);
    } else if (cmd == "top") {
      cout << (s.empty() ? -1 : s.top()) << endl;
    } else if (cmd == "size") {
      cout << s.size << endl;
    } else if (cmd == "empty") {
      cout << s.empty() << endl;
    } else if (cmd == "pop") {
      cout << (s.empty() ? -1 : s.top()) << endl;
      if (!s.empty()) {
        s.pop();
      }
    }
  }
  return 0;
}

/*
    라이브러리를 사용한 스택 구현
*/

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   stack<int> s;
//   while (n--) {
//     string cmd;
//     cin >> cmd;
//     if (cmd == "push") {
//       int num;
//       cin >> num;
//       s.push(num);
//     } else if (cmd == "top") {
//       cout << (s.empty() ? -1 : s.top()) << endl;
//     } else if (cmd == "size") {
//       cout << s.size() << endl;
//     } else if (cmd == "empty") {
//       cout << s.empty();
//     } else if (cmd == "pop") {
//       cout << (s.empty() ? -1 : s.top()) << endl;
//       if (!s.empty()) {
//         s.pop();
//       }
//     }
//   }
//   return 0;
// }