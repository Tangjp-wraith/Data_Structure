#include <cstddef>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

void SplitZero(LinkList &a, LinkList &b, LinkList &c) {
  LinkList pa = a->next;
  b = new LNode;
  c = new LNode;
  b->next = NULL;
  c->next = NULL;
  while (pa) {
    LinkList r = pa->next;
    if (pa->data < 0) {
      pa->next = b->next;
      b->next = pa;
    } else {
      pa->next = c->next;
      c->next = pa;
    }
    pa = r;
  }
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

  SplitZero(a, b, c);
  cout << "b: ";
  b = b->next;
  while (b) {
    cout << b->data << " ";
    b = b->next;
  }
  cout << endl;
  cout << "c: ";
  c = c->next;
  while (c) {
    cout << c->data << " ";
    c = c->next;
  }
  cout << endl;
  return 0;
}