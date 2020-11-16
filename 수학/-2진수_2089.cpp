#include <iostream>
using namespace std;

void two(int n) {
  if (n == 0) {
    return;
  }
  if (n % 2 == 0) {
    two(-(n / 2));
    printf("0");
  } else {
    if (n > 0) {
      two(-(n / 2));
    } else {
      two((-n + 1) / 2);
    }
    printf("1");
  }
}
int main() {
  int n;
  cin >> n;
  if (n == 0) {
    cout << 0 << '\n';
  } else {
    two(n);
  }
  return 0;
}