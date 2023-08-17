#include <cstddef>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

void Mix(LinkList &a, LinkList &b) {
  LinkList pa = a->next, pb = b->next;
  LinkList pc = a;
  while (pa && pb) {
    if (pa->data == pb->data) {
      pc->next = pa;
      pc = pa;
      pa = pa->next;
    } else if (pa->data < pb->data) {
      LinkList u = pa;
      pa = pa->next;
      delete u;
    } else {
      LinkList u = pb;
      pb = pb->next;
      delete u;
    }
  }
  while (pa) {
    LinkList u = pa;
    pa = pa->next;
    delete u;
  }
  while (pb) {
    LinkList u = pb;
    pb = pb->next;
    delete u;
  }
  pc->next = NULL;
  delete b;
}

int main() {
  LinkList a = new LNode;
  a->next = NULL;
  LinkList b = new LNode;
  b->next = NULL;
  LinkList p, pa = a, pb = b;
  for (int i = 1; i < 20; i += 2) {
    p = new LNode;
    p->data = i;
    p->next = NULL;
    pa->next = p;
    pa = p;
  }
  for (int i = 1; i < 10; i += 2) {
    p = new LNode;
    p->data = i;
    p->next = NULL;
    pb->next = p;
    pb = p;
  }
  Mix(a, b);
  a = a->next;
  while (a) {
    cout << a->data << " ";
    a = a->next;
  }
  cout << endl;
  return 0;
}