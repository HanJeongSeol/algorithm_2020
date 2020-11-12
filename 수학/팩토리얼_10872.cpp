#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int result = 1;
  for (int i = n; i > 0; i--) {
    result *= i;
  }

  cout << result << '\n';
  return 0;
}