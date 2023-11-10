#include <algorithm>

#define N 1005

int f[N][N], n;

void add(int x, int y, int z) {
    f[x][y] = std::min(f[x][y], z);
}