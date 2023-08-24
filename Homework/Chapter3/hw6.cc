#include <string.h>

#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;
#define MAXSIZE 100

typedef struct node {
  int data;
  struct node *next;
} node, *queuenode;

typedef struct {
  queuenode rear;
} queue;

void init(queue &q) {
  q.rear = new node;
  q.rear->next = q.rear;
}

bool empty(queue &q) {
  if (q.rear == q.rear->next) {
    return true;
  }
  return false;
}

void push(queue &q, int elem) {
  queuenode p = new node;
  p->data = elem;
  p->next = q.rear->next;
  q.rear->next = p;
  q.rear = p;
}

void pop(queue &q, int &elem) {
  if (empty(q)) {
    cout << "the queue is empty" << endl;
    return;
  }
  queuenode p;
  p = q.rear->next->next;
  q.rear->next->next = p->next;
  elem = p->data;
  if (p == q.rear) {
    q.rear = q.rear->next;
  }
}

void print(queue &q) {
  queuenode p;
  p = q.rear->next->next;
  while (p != q.rear->next) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}

int main() {
  queue q;
  init(q);
  for (int i = 0; i < 10; i++) {
    push(q, i);
  }
  print(q);
  int e;
  for (int i = 0; i < 5; i++) {
    pop(q, e);
    cout << "pop: " << e << endl;
  }
  print(q);
}