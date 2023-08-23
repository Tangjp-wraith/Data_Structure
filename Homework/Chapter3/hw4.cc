#include <iostream>

using namespace std;

#define MAXSIZE 100
typedef struct {
  int *bot, *top;
  int maxsize;
} Stack;

void init(Stack &s) {
  s.bot = new int[MAXSIZE];
  if (!s.bot) {
    cout << "init error" << endl;
    return;
  }
  s.top = s.bot;
  s.maxsize = MAXSIZE;
}

bool empty(Stack &s) {
  if (s.bot == s.top) {
    return true;
  }
  return false;
}

bool full(Stack &s) {
  if (s.top - s.bot == s.maxsize) {
    return true;
  }
  return false;
}

void push(Stack &s, int elem) {
  if (full(s)) {
    cout << "stack is full,push error!" << endl;
    return;
  }
  *(s.top++) = elem;
}

void pop(Stack &s) {
  if (empty(s)) {
    cout << "stack is empty,pop error!" << endl;
    return;
  }
  --s.top;
  return;
}

int top(Stack &s) {
  if (empty(s)) {
    cout << "stack is empty,pop error!" << endl;
    return -1;
  }
  return *(s.top - 1);
}

bool In(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/') {
    return true;
  }
  return false;
}

int Op(int a, char op, int b) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      return b / a;
  }
  return -1;
}

int main() {
  char str[10];
  cin >> str;
  Stack s;
  init(s);
  while (str[0] != '$') {
    if (!In(str[0])) {
      push(s, atoi(str));
    } else {
      int a, b;
      a = top(s), pop(s);
      b = top(s), pop(s);
      push(s, Op(a, str[0], b));
    }
    cin >> str;
  }
  cout << top(s)<<endl;
  return 0;
}