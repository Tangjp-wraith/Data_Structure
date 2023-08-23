#include <string.h>

#include <cstddef>
#include <iostream>

using namespace std;

#define MAXSIZE 100

typedef struct Node {
  char data;
  struct Node *next;
} Node, *Stack;

void init(Stack &s) { s = NULL; }

void push(Stack &s, char c) {
  Stack p = new Node;
  p->data = c;
  p->next = s;
  s = p;
}

void pop(Stack &s, char &elem) {
  Stack p = new Node;
  if (s == NULL) {
    cout << "stack is empty!" << endl;
    return;
  }
  elem = s->data;
  p = s;
  s = s->next;
  delete p;
}

bool empty(Stack &s) {
  if (s == NULL) {
    return true;
  }
  return false;
}

bool check(char *str) {
  int len = strlen(str);
  Stack s;
  init(s);
  char elem;
  for (int i = 0; i < len; ++i) {
    if (str[i] == 'I') {
      push(s, str[i]);
    } else {
      if (empty(s)) {
        return false;
      }
      pop(s, elem);
    }
  }
  return true;
}

int main() {
  char s1[] = "IOIIOIOO";
  char s2[] = "IOOIOIIO";
  char s3[] = "IIIOIOIO";
  char s4[] = "IIIOOIOO";
  cout << check(s1) << endl;
  cout << check(s2) << endl;
  cout << check(s3) << endl;
  cout << check(s4) << endl;
}