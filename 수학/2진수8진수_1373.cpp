/*
    string형을 int로 변환할 필요 없이 ASCII CODE를 사용해서 숫자를 구할 수 있다.
    ex > 0 = 48, 1 = 49
    2진수는 0과 1밖에 없기 때문에 이진수 값이 10이라면
    s[0] - '0' = 49-48 = 1
    s[1] - '0' = 48-48 = 0
    결과 = 1 * 2 + 0 * 1 = 2
*/

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int size = s.size();
  if (size % 3 == 1) {
    cout << s[0] - '0';
  } else if (size % 3 == 2) {
    cout << (s[0] - '0') * 2 + s[1] - '0';
  }
  for (int i = size % 3; i < size; i += 3) {
    cout << (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + s[i + 2] - '0';
  }

  return 0;
}