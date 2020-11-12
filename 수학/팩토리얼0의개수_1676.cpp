#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a, b, c;
  a = n / 5;
  b = n / 25;
  c = n / 125;
  cout << a + b + c << '\n';

  return 0;
}
