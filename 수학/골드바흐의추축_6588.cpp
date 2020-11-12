#include <cstdio>
#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  check[0] = check[1] = true;
  for (int i = 2; i <= MAX; i++) {
    if (check[i] == false) {
      for (int j = i * 2; j <= MAX; j += i) {
        check[j] = true;
      }
    }
  }

  int n;
  cin >> n;
  while (n != 0) {
    int count = 0;
    for (int i = 3; i <= n - i; i += 2) {
      if (check[n - i] == false) {
        count += 1;
        if (count == 1) {
          printf("%d = %d + %d\n", n, i, n - i);
          break;
        } else {
          cout << "Goldbach's conjecture is wrong." << '\n';
        }
      }
    }
    cin >> n;
  }
  return 0;
}