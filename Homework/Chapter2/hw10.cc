#include <iostream>
using namespace std;

typedef struct {
  int *elem;
  int length;
} SqList;

void Delete(SqList &a, int item) {
  int cnt = 0;
  for (int i = 0; i < a.length; ++i) {
    if (a.elem[i] != item) {
      a.elem[cnt] = a.elem[i];
      cnt++;
    }
  }
  a.length = cnt;
}

int main() {
  SqList a;
  a.elem = new int[25];
  a.length = 20;
  for (int i = 0; i < a.length; i++) {
    a.elem[i] = rand() % 15;
    cout << a.elem[i] << " ";
  }
  cout << endl;
  Delete(a, 13);
  for (int i = 0; i < a.length; ++i) {
    cout << a.elem[i] << " ";
  }
  cout << endl;
}
