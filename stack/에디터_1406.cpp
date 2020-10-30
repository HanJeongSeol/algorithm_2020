#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
char str[600000];

int main() {
  scanf("%s", str);
  stack<char> left, right;
  int n = strlen(str);
  for (int i = 0; i < n; i++) {
    left.push(str[i]);
  }
  int m;
  scanf("%d", &m);
  while (m--) {
    char what;
    scanf(" %c", &what);
    if (what == 'L') {
      if (!left.empty()) {
        right.push(left.top());
        left.pop();
      }
    } else if (what == 'D') {
      if (!right.empty()) {
        left.push(right.top());
        right.pop();
      }
    } else if (what == 'B') {
      if (!left.empty()) {
        left.pop();
      }
    } else if (what == 'P') {
      char i;
      scanf(" %c", &i);
      left.push(i);
    }
  }
  while (!left.empty()) {
    right.push(left.top());
    left.pop();
  }
  while (!right.empty()) {
    printf("%c", right.top());
    right.pop();
  }
  printf("\n");
  return 0;
}

/*
    abced

    한 줄짜리 에디터 존재하고 LDBP 연산이 존재.
    L연산 : 커서를 왼쪽으로 이동
    D연산 : 커서를 오른쪽으로 이동
    B연산 : 커서 왼쪽 문자를 지움
    P $ : $문자를 커서 왼쪽에 추가.

    L,D : 커서의 위치만 기록해놨다가 커서의 위치를 +1, -1하는 방식
    B : 실제로 지웠다면 중간에 빈공간이 나오게 됨. 뒤에 문자를 앞으로 당겨서
   공백을 없앰
        --> 문자열의 길이가 M일 때 O(M)연산.
        --> abcdab에서 맨 앞 a를 삭제하게되면 m-1번 연산을 통해 앞으로
   당겨야한다. P : 중간에 삽입하면 그 이후 문자를 뒤로 옮긴후 추가. 이 때 최대
   m-1번 움직이게 된다.
        --> O(M)
    M은 최대 60만개 가능 , 매번 문자열이 맨 앞에 추가된다하면 o(m^2)이 된다.

    좀 더 빠른방법은 스택을 사용하면 된다.
    시간이 오래 걸리는 b,p연산이 커서를 기준으로 추가 삭제된다는 것을 이용한다.
    b는 커서 왼쪽 삭제, p는 커서 왼쪽 추가. 이를 이용해서 스택 이용. 커서가
   기준이다! 커서의 왼쪽 스택과 오른쪽 스택으로 나눠볼 수 있다. 커서를 기준으로
   push pop 이뤄진다.

   커서는 가만히 있고 문자만 이동한다. 왼쪽에 pop되고 오른쪽에 push.
   pop push는 o(1)이다.
*/