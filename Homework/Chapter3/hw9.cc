#include <string.h>

#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;
#define MAXSIZE 10

int rec_ack(int m, int n) {
  if (m == 0) {
    return n + 1;
  }
  if (m != 0 && n == 0) {
    return rec_ack(m - 1, 1);
  }
  return rec_ack(m - 1, rec_ack(m, n - 1));
}


int ack(int m, int n) {
  int a[10][10];
  for (int i = 0; i < 10; i++) {
    a[0][i] = i + 1;
  }
  for (int i = 1; i < 10; i++) {
    a[i][0] = a[i - 1][1];
    for (int j = 1; j < 10; j++) {
      a[i][j] = a[i - 1][a[i][j - 1]];
    }
  }
  return a[m][n];
}

int main() {
  cout << rec_ack(2, 1) << endl;
  cout << ack(2, 1) << endl;
  return 0;
}