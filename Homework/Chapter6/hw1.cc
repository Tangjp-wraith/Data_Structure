#include <iostream>

using namespace std;

char a[] = {'a', 'b', 'c', 'd', 'e'};

typedef struct {
  char vexs[100];
  int arcs[100][100];
  int vexnum, arcnum;
} AMGraph;

// 书本图6.1 G2
void CreateUDN(AMGraph &G) {
  G.vexnum = 5, G.arcnum = 6;
  for (int i = 0; i < G.vexnum; ++i) {
    G.vexs[i] = a[i];
  }
  for (int i = 0; i < G.vexnum; ++i) {
    for (int j = 0; j < G.vexnum; ++j) {
      G.arcs[i][j] = 114514;
    }
  }
  G.arcs[0][1] = G.arcs[1][0] = 1;
  G.arcs[0][3] = G.arcs[3][0] = 2;
  G.arcs[1][2] = G.arcs[2][1] = 3;
  G.arcs[1][4] = G.arcs[4][1] = 4;
  G.arcs[2][3] = G.arcs[3][2] = 5;
  G.arcs[2][4] = G.arcs[4][2] = 6;
}

void Show(AMGraph G) {
  for (int i = 0; i < G.vexnum; ++i) {
    for (int j = 0; j < G.vexnum; ++j) {
      if (j != G.vexnum - 1) {
        if (G.arcs[i][j] != 114514) {
          cout << G.arcs[i][j] << "\t";
        } else {
          cout << "∞"
               << "\t";
        }
      } else {
        if (G.arcs[i][j] != 114514) {
          cout << G.arcs[i][j] << endl;
        } else {
          cout << "∞" << endl;
        }
      }
    }
  }
  cout << endl;
}

void InsertVex(AMGraph &G, char v) {
  G.vexs[G.vexnum++] = v;
  for (int i = 0; i < G.vexnum; i++) {
    G.arcs[i][G.vexnum - 1] = 114514;
    G.arcs[G.vexnum - 1][i] = 114514;
  }
}

void DeleteVex(AMGraph &G, char v) {
  int pos = -1;
  for (int i = 0; i < G.vexnum; ++i) {
    if (G.vexs[i] == v) {
      pos = i;
      break;
    }
  }
  if (pos == -1) {
    cout << "delete error!" << endl;
  }
  swap(G.vexs[pos], G.vexs[G.vexnum - 1]);
  for (int i = 0; i < G.vexnum; i++) {
    G.arcs[i][pos] = G.arcs[i][G.vexnum - 1];
    G.arcs[pos][i] = G.arcs[G.vexnum - 1][pos];
  }
  G.vexnum--;
}



int main() {
  AMGraph G;
  CreateUDN(G);
  Show(G);
  InsertVex(G, 'f');
  Show(G);
  DeleteVex(G, 'e');
  Show(G);
}