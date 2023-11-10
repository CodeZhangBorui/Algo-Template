#include <algorithm>
#include "../Graph_Theory/Adjacency_Matrix.cpp"

void floyd(int root) {
    for(int k = 1; k <= n; k++) {
        for(int x = 1; x <= n; x++) {
            for(int y = 1; y <= n; y++) {
                f[x][y] = std::min(f[x][y], f[x][k] + f[k][y]);
            }
        }
    }
}
