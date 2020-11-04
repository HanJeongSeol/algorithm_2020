#include <cstdio>
#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  queue<int> q;
  for (int i = 1; i <= n; i++) {
    q.push(i);
  }
  printf("<");
  while (--n) {
    int s = k;
    while (--s) {
      q.push(q.front());
      q.pop();
    }
    printf("%d, ", q.front());
    q.pop();
  }
  printf("%d>", q.front());
  return 0;
}