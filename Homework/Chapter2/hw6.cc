#include <cstddef>
#include <cstdint>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

int FindMax(LinkList &a) {
  if (!a->next) {
    return INT32_MIN;
  }
  LinkList pa = a->next;
  LinkList pb = pa->next;
  int maxn = pa->data;
  while (pb) {
    if (pa->data < pb->data) {
      maxn = pb->data;
      pa = pb;
    }
    pb = pb->next;
  }
  return maxn;
}

int main() {
  LinkList a = new LNode;
  a->next = NULL;
  LinkList b, c;
  LinkList p, pa = a;
  for (int i = -17; i < 20; i += 2) {
    p = new LNode;
    p->data = i;
    p->next = NULL;
    pa->next = p;
    pa = p;
  }
  p = new LNode;
  p->data = 123;
  p->next = NULL;
  pa->next = p;
  pa = p;
  for (int i = 25; i < 121; i += 2) {
    p = new LNode;
    p->data = i;
    p->next = NULL;
    pa->next = p;
    pa = p;
  }
  cout << FindMax(a)<<endl;
  return 0;
}