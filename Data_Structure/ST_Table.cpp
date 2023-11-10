#include <cmath>
#include <algorithm>

#define N 100005

int data[N], n;

struct STable {
    int stList[2][N][21];
    void init() {
        for(int i = 1; i <= n; i++) {
            stList[0][i][0] = stList[1][i][0] = data[i];
        }
        for(int j = 1; j <= 21; j++) {
            for(int i = 1; i + (1 << j) - 1 <= n; i++) {
                stList[0][i][j] = std::max(stList[0][i][j - 1], stList[0][i + (1 << (j - 1))][j - 1]);
                stList[1][i][j] = std::min(stList[1][i][j - 1], stList[1][i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    int getMax(int l, int r) {
        int k = log2(r - l + 1); 
        return std::max(stList[0][l][k], stList[0][r - (1 << k) + 1][k]);
    }
    int getMin(int l, int r) {
        int k = log2(r - l + 1); 
        return std::min(stList[1][l][k], stList[1][r - (1 << k) + 1][k]);
    }
};
