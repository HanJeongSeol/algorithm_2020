#include <cmath>
#include <iostream>
#include <string>
using namespace std;
string eight[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
int main() {
  string s;
  cin >> s;
  int size = s.size();
  bool check = true;
  if (size == 1 && s[0] - '0' == 0) {
    cout << 0;
  }
  for (int i = 0; i < size; i++) {
    int n = s[i] - '0';
    if (check == true && n < 4) {
      if (n == 0) {
        continue;
      } else if (n == 1) {
        cout << "1";
      } else if (n == 2) {
        cout << "10";
      } else if (n == 3) {
        cout << "11";
      }
      check = false;
    } else {
      cout << eight[n];
      check = false;
    }
  }
  return 0;
}
