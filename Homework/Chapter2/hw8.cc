#include <cstddef>
#include <cstdint>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

void Delete(LinkList &a, int mink, int maxk) {
  LinkList pa = a->next;
  LinkList pmin, q;
  while (pa && pa->data <= mink) {
    pmin = pa;
    pa = pa->next;
  }
  if (pa) {
    while (pa && pa->data < maxk) {
      pa = pa->next;
    }
    q = pmin->next;
    pmin->next = pa;
    while (q != pa) {
      LinkList s = q->next;
      delete q;
      q = s;
    }
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
  Delete(a,-6,13);
  a = a->next;
  while (a) {
    cout << a->data << " ";
    a = a->next;
  }
  cout << endl;
  return 0;
}