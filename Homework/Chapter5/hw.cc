#include <cstddef>
#include <iostream>

using namespace std;

char a[10] = {'#', '1', '2', '3', '4', '5', '#', '7'};
char b[10] = {'#', '1', '2', '3', '4', '#', '#', '7'};
typedef struct Node {
  int data;
  struct Node *lchild, *rchild;
} Node, *BiTree;

int CountLeaf(BiTree T) {
  int count = 0;
  if (!T) {
    return 0;
  } else if (!T->lchild && !T->rchild) {
    return count + 1;
  } else {
    count = CountLeaf(T->lchild) + CountLeaf(T->rchild);
    return count;
  }
}

bool Isame(BiTree T1, BiTree T2) {
  if (!T1 && !T2) {
    return true;
  }
  if (T1 && T2) {
    if (Isame(T1->lchild, T2->lchild) && Isame(T1->rchild, T2->rchild)) {
      return true;
    } else {
      return false;
    }
  }
  return false;
}

void ChangeLRChild(BiTree &T) {
  if(!T) {
    return;
  } 
}

void CreateTree(BiTree &T, int i, char str[]) {
  if (i > 7) {
    return;
  }
  if (str[i] != '#') {
    T = new Node;
    T->data = (a[i] - '0');
  } else {
    T = NULL;
  }
  CreateTree(T->lchild, 2 * i, str);
  CreateTree(T->rchild, 2 * i + 1, str);
}

void print(BiTree T, int n) {
  int i;
  if (T) {
    print(T->rchild, n + 1);
    for (i = 0; i < n; i++) {
      printf("\t");
    }
    printf("%d\n", T->data);
    print(T->lchild, n + 1);
  }
}

int main() {
  BiTree T;
  CreateTree(T, 1, a);
  print(T, 1);
  BiTree T1;
  CreateTree(T1, 1, b);
  if (Isame(T, T1)) {
    cout << "same" << endl;
  } else {
    cout << "different" << endl;
  }
}