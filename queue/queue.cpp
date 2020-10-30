#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct Queue {
  int data[10000];
  int begin, end;
  Queue() {
    begin = 0;
    end = 0;
  }
  void push(int num) {
    data[end] = num;
    end += 1;
  }

  int pop() {
    if (empty()) {
      return -1;
    } else {
      data[begin] = 0;
      begin += 1;
      return data[begin - 1];
    }
  }

  int size() { return end - begin; }
  bool empty() {
    if (begin == end)
      return true;
    else
      return false;
  }
  int front() { return data[begin]; }
  int back() { return data[end - 1]; }
};

int main() {
  int n;
  scanf("%d", &n);
  Queue q;
  while (n--) {
    string str;
    cin >> str;
    if (str == "push") {
      int number;
      scanf("%d", &number);
      q.push(number);
    } else if (str == "pop") {
      if (q.empty()) {
        printf("%d\n", -1);
      } else {
        printf("%d\n", q.front());
        q.pop();
      }
    } else if (str == "size") {
      printf("%d\n", q.size());
    } else if (str == "empty") {
      if (q.empty()) {
        printf("%d\n", 1);
      } else {
        printf("%d\n", 0);
      }
    } else if (str == "front") {
      if (q.empty()) {
        printf("%d\n", -1);
      } else {
        printf("%d\n", q.front());
      }
    } else if (str == "back") {
      if (q.empty()) {
        printf("%d\n", -1);
      } else {
        printf("%d\n", q.back());
      }
    }
  }
  return 0;
}