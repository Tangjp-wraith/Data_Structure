#include <string.h>

#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;
#define MAXSIZE 10

typedef struct node {
  int data;
  struct node *next;
} node, *list;

int getmax(list l) {
  if (!l->next) {
    return l->data;
  } else {
    int maxn = getmax(l->next);
    return (maxn > l->data) ? maxn : l->data;
  }
}

int getlen(list l) {
  if (!l->next) {
    return 1;
  }
  return getlen(l->next) + 1;
}

double getavg(list l, int n) {
  if (!l->next) {
    return l->data;
  } else {
    double avg = getavg(l->next, n - 1);
    return (avg * (n - 1) + l->data) / n;
  }
}

int main() {
  list l = new node;
  l->next = NULL;
  list p, pa = l;
  double ans = 0;
  for (int i = 0; i < 20; i += 2) {
    p = new node;
    p->data = i;
    p->next = NULL;
    pa->next = p;
    pa = p;
    ans += i;
  }

  cout << getmax(l) << endl;

  cout << getlen(l) << endl;

  cout << getavg(l, 10) << endl;

  cout << ans / 10 << endl;

  l = l->next;
  while (l) {
    cout << l->data << " ";
    l = l->next;
  }
  cout << endl;
}