#include <iostream>

using namespace std;

#define MAXSIZE 10

typedef struct {
  int top[2], bot[2];
  int *v;
  int m;
} DblStack;

void init(DblStack &s) {
  s.v = new int[MAXSIZE];
  s.m = MAXSIZE;
  s.top[0] = -1;
  s.top[1] = s.m;
  s.bot[0] = 0;
  s.bot[1] = s.m - 1;
}

bool empty_all(DblStack &s) {
  if (s.top[0] == -1 && s.top[1] == s.m) {
    return true;
  }
  return false;
}

bool empty_left(DblStack &s) {
  if (s.top[0] == -1) {
    return true;
  }
  return false;
}

bool empty_right(DblStack &s) {
  if (s.top[1] == s.m) {
    return true;
  }
  return false;
}

bool full(DblStack &s) {
  if (s.top[0] == s.top[1]) {
    return true;
  }
  return false;
}

bool push_left(DblStack &s, int elem) {
  if (full(s)) {
    return false;
  }
  s.top[0]++;
  s.v[s.top[0]] = elem;
  return true;
}

bool push_right(DblStack &s, int elem) {
  if (full(s)) {
    return false;
  }
  s.top[1]--;
  s.v[s.top[1]] = elem;
  return true;
}

int pop_left(DblStack &s) {
  if (empty_left(s)) {
    cout << "the left stack is empty!" << endl;
    return 0;
  }
  return s.v[s.top[0]--];
}

int pop_right(DblStack &s) {
  if (empty_right(s)) {
    cout << "the right stack is empty!" << endl;
    return 0;
  }
  return s.v[s.top[1]++];
}

int main() {
  DblStack s;
  init(s);
  if (empty_all(s)) {
    cout << "is empty all" << endl;
  }
  push_left(s, 1);
  push_left(s, 2);
  push_left(s, 3);
  push_left(s, 4);
  push_left(s, 5);
  push_right(s, 6);
  push_right(s, 7);
  push_right(s, 8);
  push_right(s, 9);
  push_right(s, 10);
  if (full(s)) {
    cout << "is full" << endl;
  }
  cout << pop_left(s) << endl;
  cout << pop_left(s) << endl;
  cout << pop_left(s) << endl;
  cout << pop_left(s) << endl;
  cout << pop_left(s) << endl;
  cout << pop_left(s) << endl;
  if (empty_left(s)) {
    cout << "the left stack is empty!" << endl;
  }
  cout << pop_right(s) << endl;
  cout << pop_right(s) << endl;
  cout << pop_right(s) << endl;
  cout << pop_right(s) << endl;
  cout << pop_right(s) << endl;
  cout << pop_right(s) << endl;
  if (empty_right(s)) {
    cout << "the right stack is empty!" << endl;
  }
}