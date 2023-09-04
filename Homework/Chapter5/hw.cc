#include <cstddef>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

char a[10] = {'#', '1', '2', '3', '4', '5', '#', '7', '8', '#'};
char b[10] = {'#', '1', '2', '3', '4', '#', '#', '7', '#', '9'};
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
  if (!T->lchild && !T->rchild) {
    return;
  }
  std::swap(T->lchild, T->rchild);
  if (T->lchild) ChangeLRChild(T->lchild);
  if (T->rchild) ChangeLRChild(T->rchild);
}

void DoubleTraverse(BiTree &T) {
  if (T) {
    cout << T->data;
    DoubleTraverse(T->lchild);
    cout << T->data;
    DoubleTraverse(T->rchild);
  }
}

void FindWidth(BiTree T, int k, int &ans, int *count) {
  if (!T) {
    return;
  }
  count[k]++;
  if (ans < count[k]) ans = count[k];
  FindWidth(T->lchild, k + 1, ans, count);
  FindWidth(T->rchild, k + 1, ans, count);
}

int CountOne(BiTree T) {
  queue<BiTree> q;
  if (!T) {
    return 0;
  }
  q.push(T);
  int count = 0;
  while (!q.empty()) {
    BiTree x = q.front();
    if ((x->lchild && !x->rchild) || (!x->lchild && x->rchild)) {
      count++;
      if (x->lchild) q.push(x->lchild);
      if (x->rchild) q.push(x->rchild);
    } else if (x->lchild && x->rchild) {
      q.push(x->lchild);
      q.push(x->rchild);
    }
    q.pop();
  }
  return count;
}

void LongPath(BiTree T, int path[], int &len, int longpath[], int &longlen) {
  if (!T) {
    return;
  }
  if (!T->lchild && !T->rchild) {
    path[len] = T->data;
    if (len > longlen) {
      for (int i = 0; i <= len; ++i) {
        longpath[i] = path[i];
      }
      longlen = len;
    }
  } else {
    path[len++] = T->data;
    LongPath(T->lchild, path, len, longpath, longlen);
    LongPath(T->rchild, path, len, longpath, longlen);
    len--;
  }
}

void LeafToRootPath(BiTree T, int *path, int len) {
  if (!T) {
    return;
  }
  if (!T->lchild && !T->rchild) {
    cout << T->data << "->";
    for (int i = len - 1; i > 0; --i) {
      cout << path[i] << "->";
    }
    cout << path[0] << endl;
  } else {
    path[len++] = T->data;
    LeafToRootPath(T->lchild, path, len);
    LeafToRootPath(T->rchild, path, len);
    len--;
  }
}

void CreateTree(BiTree &T, int i, char str[]) {
  if (i > 9) {
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
  cout << endl;
  ChangeLRChild(T);
  print(T, 1);
  DoubleTraverse(T);
  cout << endl;

  int count[100] = {0};
  int ans = 0;
  FindWidth(T, 1, ans, count);
  cout << ans << endl;
  print(T, 1);
  cout << CountOne(T1) << endl;
  {
    int path[15] = {0}, longpath[15] = {0};
    int len = 0, longlen = 0;
    LongPath(T, path, len, longpath, longlen);
    for (int i = 0; i <= longlen; ++i) {
      if (i != longlen)
        cout << longpath[i] << "->";
      else
        cout << longpath[i];
    }
    cout << endl;
  }
  {
    print(T, 1);
    int path[15] = {0};
    int len = 0;
    LeafToRootPath(T, path, len);
  }
}