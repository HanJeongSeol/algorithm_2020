#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

// 유클리드호제법 사용
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else
    return gcd(b, (a % b));
}

// 재귀를 사용하지 않는 경우
int gcd_re(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

// 유클리드호제법 사용하지 않는 경우
int gcd_not(int a, int b) {
  int g = 1;
  for (int i = 2; i < min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      g = i;
    }
  }
  return g;
}

int main() {

  int a, b;
  scanf("%d %d", &a, &b);
  if (a < b) {
    swap(a, b);
  }
  int result_gcd = gcd(a, b);
  printf("%d\n", result_gcd);
  int result_lcm = (a * b) / result_gcd;
  printf("%d\n", result_lcm);
  int test = gcd_re(a, b);
  cout << test << endl;

  return 0;
}
