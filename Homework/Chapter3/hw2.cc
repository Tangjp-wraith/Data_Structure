#include <string.h>

#include <iostream>
#include <stack>

using namespace std;

bool check(char* str) {
  stack<char> s;
  int len = strlen(str);
  int i = 0;
  for (i = 0; i < len / 2; ++i) {
    s.push(str[i]);
  }
  if (len % 2) {
    i++;
  }
  while(!s.empty() && i < len) {
    if(str[i++] != s.top()) {
      return false;
    }
    s.pop();
  }
  return true;
}

int main() {
  char s1[] = "abba";
  char s2[] = "abdba";
  char s3[] = "good";
  cout << check(s1)<<endl;
  cout << check(s2) << endl;
  cout << check(s3) << endl;
}