// #include <cstring>
// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int main() {
//   int t;
//   int flag = 0;
//   scanf("%d", &t);
//   while (t--) {
//     stack<char> s;
//     char str[50];
//     scanf("%s", str);
//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//       if (str[i] == '(') {
//         s.push(str[i]);
//       } else if (!s.empty()) {
//         s.pop();
//       } else if (s.empty()) {
//         flag = 1;
//         break;
//       }
//     }
//     cout << s.empty() << endl;
//     if (s.empty() == 0 || flag == 1) {
//       printf("NO\n");
//       flag = 0;
//     } else {
//       printf("YES\n");
//     }
//   }
//   return 0;
// }

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string check(string s) {
  int number = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      number++;
    } else {
      number--;
    }
    if (number < 0)
      return "NO";
  }
  if (number == 0) {
    return "YES";
  } else {
    return "NO";
  }
};
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  scanf("%d", &t);
  while (t--) {
    char s[50];
    scanf("%s", s);
    cout << check(s) << '\n';
  }
}