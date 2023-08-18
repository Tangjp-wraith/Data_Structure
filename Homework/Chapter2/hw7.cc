#include <cstddef>
#include <cstdint>
#include <iostream>

using namespace std;

typedef struct LNode {
  int data;
  struct LNode *next;
} LNode, *LinkList;

void Inverse(LinkList &a) {
  LinkList pa = a->next;
  a->next = NULL;
  LinkList pb;
  while(pa) {
    pb = pa->next;
    pa->next = a->next;
    a->next = pa;
    pa = pb;
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
  Inverse(a);
  a = a->next;
  while (a) {
    cout << a->data << " ";
    a = a->next;
  }
  cout << endl;
  return 0;
}