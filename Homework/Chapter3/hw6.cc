#include <string.h>

#include <cstddef>
#include <iostream>

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

void push_back(queue &q, int elem) {
  
}