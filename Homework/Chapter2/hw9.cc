#include <iostream>
using namespace std;

typedef struct DuLNode {
  int data;
  struct DuLNode *prior;
  struct DuLNode *next;
} DuLNode, *DuLinkList;

void change(DuLinkList p) {
  DuLinkList q;
  q = p->prior;
  q->prior->next = p;
  p->prior = q->prior;
  q->next = p->next;
  p->next->prior = q;
  q->prior = p;
  p->next = q;
}

int main() {
  DuLinkList a = new DuLNode;
  a->next = a;
  a->prior = a;

  DuLinkList p;
  p = a;
  for (int i = 0; i < 30; i++) {
    DuLinkList s;
    s = new DuLNode;
    s->data = rand() % 20;
    p->next = s;
    s->next = a;
    s->prior = p;
    p = s;
  }

  p = a->next;
  while (p != a) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;

  p = a->next;
  int k = rand() % 20;
  cout << "change first value = " << k << endl;
  while (p) {
    if (p->data == k) {
      change(p);
      break;
    } else {
      p = p->next;
    }
  }

  p = a->next;
  while (p != a) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}