#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int main() {
  int n, s;
  cin >> n >> s;

  vector<int> distance(n);
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    int dis = s - d;
    if (dis < 0)
      dis = -dis;
    distance[i] = dis;
  }
  int m = distance[0];

  for (int i = 1; i < n; i++) {
    m = gcd(m, distance[i]);
  }
  cout << m << '\n';
  return 0;
}
