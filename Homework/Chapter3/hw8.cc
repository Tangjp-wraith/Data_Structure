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
} queue;

void init(queue &q) {
  q.data = new int[MAXSIZE];
  q.front = q.rear = 0;
}

void push(queue &q, int elem) {
  if (q.rear == (q.front - 1 + MAXSIZE) % MAXSIZE) {
    cout << "queue is full" << endl;
    return;
  }
  q.data[q.front] = elem;
  q.front = (q.front - 1 + MAXSIZE) % MAXSIZE;
  // cout << "push : " << elem << endl;
}

void pop(queue &q, int &elem) {
  if (q.rear == q.front) {
    cout << "queue is empty" << endl;
    return;
  }
  elem = q.data[q.rear];
  q.rear = (q.rear - 1 + MAXSIZE) % MAXSIZE;
}

int main() {
  queue q;
  init(q);
  for (int i = 0; i < 10; i++) {
    push(q, i);
  }
  cout << "push finished" << endl;
  int elem;
  pop(q, elem);
  cout << elem << endl;
  push(q, 10);
  push(q, 11);
  for (int i = 0; i < 10; i++) {
    pop(q, elem);
    cout << elem << endl;
  }
}