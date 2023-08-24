#include <string.h>

#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;
#define MAXSIZE 10

typedef struct {
  int *data;
  int front;
  int rear;
  int tag;
} queue;

void init(queue &q) {
  q.data = new int[MAXSIZE];
  q.rear = q.front = 0;
  q.tag = 0;
}

void push(queue &q, int elem) {
  if (q.front == q.rear % MAXSIZE && q.tag == 1) {
    cout << "queue is full" << endl;
    return;
  }
  q.data[q.rear] = elem;
  q.rear = (q.rear + 1) % MAXSIZE;
  if (q.rear == q.front) {
    q.tag = 1;
  }
}

void pop(queue &q, int &elem) {
  if (q.front == q.rear && q.tag == 0) {
    cout << "queue is empty" << endl;
    return;
  }
  elem = q.data[q.front];
  q.front = (q.front + 1) % MAXSIZE;
  if (q.front == q.rear) {
    q.tag = 0;
  }
}

int main() {
  queue q;
  init(q);
  for (int i = 0; i < 10; i++) {
    push(q, i);
  }
  int elem;
  pop(q, elem);
  cout << elem << endl;
  push(q,10);
  push(q,11);
  for (int i = 0; i < 10; i++) {
    pop(q, elem);
    cout <<elem <<endl;
  }
}