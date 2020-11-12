#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int count[1000001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> ans(n);
  stack<int> s;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    count[a[i]] += 1;
  }
  s.push(0);
  for (int i = 1; i < n; i++) {
    while (!s.empty() && count[a[s.top()]] < count[a[i]]) {
      ans[s.top()] = a[i];
      s.pop();
    }
    s.push(i);
  }

  while (!s.empty()) {
    ans[s.top()] = -1;
    s.pop();
  }

  for (auto n : ans) {
    cout << n << ' ';
  }
}