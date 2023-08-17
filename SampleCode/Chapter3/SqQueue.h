#pragma once
#include <fstream>
#include <iostream>
using namespace std;

#define MAXQSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef struct {
  char name[20];
  char sex;
} Person;

// typedef int QElemType;
typedef Person QElemType;  // 算法3.23　舞伴问题
typedef int Status;

typedef struct {
  QElemType *base;  //初始化时动态分配存储空间
  int front;        //头指针
  int rear;         //尾指针
} SqQueue;

//算法3.11　循环队列的初始化
Status InitQueue(SqQueue &Q);

//算法3.12　求循环队列的长度
int QueueLength(SqQueue Q);

//算法3.13　循环队列的入队
Status EnQueue(SqQueue &Q, QElemType e);

//算法3.14　循环队列的出队
Status DeQueue(SqQueue &Q, QElemType &e);

//算法3.15　取循环队列的队头元素
QElemType GetHead(SqQueue Q);

bool QueueEmpty(SqQueue &Q);

//算法3.23　舞伴问题
void DancePartner(Person dance[], int num);