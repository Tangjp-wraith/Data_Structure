#include <iostream>

using namespace std;

#define MAXSIZE 10

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

void Intput() {
  Stack s;
  int n;
  init(s);
  cout << "input a number means the array's size: ";
  cin >> n;
  cout << endl;
  int a;
  for (int i = 0; i < n; ++i) {
    cin >> a;
    if (a == -1) {
      cout << "pop the top: " << top(s) << endl;
      pop(s);
    } else {
      cout << "push into the stack" << endl;
      push(s, a);
    }
  }
}

int main() { Intput(); }