#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  check[0] = check[1] = true;
  for (int i = 2; i < MAX + 1; i++) {
    if (check[i] == false) {
      for (int j = i * 2; j < MAX + 1; j += i) {
        check[j] = true;
      }
    }
  }

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
      if (check[n - i] == false && check[i] == false) {
        if (n - i == i) {
          count++;
        }
        count += 1;
      }
    }
    cout << count / 2 << '\n';
  }

  return 0;
}