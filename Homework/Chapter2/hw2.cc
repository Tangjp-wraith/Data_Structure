#include <cstddef>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

void Merge(LinkList &a, LinkList &b) {
  LinkList pa = a->next, pb = b->next;
  LinkList pc = a;
  pc->next = NULL;
  LinkList q;
  while (pa || pb) {
    if (!pa) {
      q = pb;
      pb = pb->next;
    } else if (!pb) {
      q = pa;
      pa = pa->next;
    } else if (pa->data <= pb->data) {
      q = pa;
      pa = pa->next;
    } else {
      q = pb;
      pb = pb->next;
    }
    q->next = pc->next;
    pc->next = q;
  }
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
  Merge(a, b);
  a = a->next;
  while (a) {
    cout << a->data << " ";
    a = a->next;
  }
  cout << endl;
  return 0;
}