#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, (a % b));
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int number[1000001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> number[i];
    }
    long long result = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        result += gcd(number[i], number[j]);
      }
    }
    cout << result << '\n';
  }
  return 0;
}