#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

bool prime(int a) {
  if (a < 2)
    return false;
  for (int i = 2; i < a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

bool prime_1(int a) {
  if (a < 2)
    return false;
  for (int i = 2; i < a / 2; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

bool prime_2(int a) {
  if (a < 2)
    return false;
  for (int i = 2; i * i < a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int t;
  scanf("%d\n", &t);
  int count = 0;

  while (t--) {
    int n;
    scanf("%d", &n);
    if (prime_2(n)) {
      count += 1;
    }
  }

  printf("%d\n", count);
  return 0;
}