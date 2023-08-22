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

bool empty() {}

void push() {}