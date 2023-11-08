#include <algorithm>

#define N 1000000

struct ufs {
    int fa[N], depth[N];

    void init(int n) {
        for(int i = 1; i <= n; i++) {
            fa[i] = i;
            depth[i] = 1;
        }
    }
    int find(int x) {
        while (x != fa[x]) {
            x = fa[x];
        }
        return x;
    }
    void merge(int x, int y) {
        int fx = find(x);
        int fy = find(y);
        if(fx == fy) {
            return;
        }
        if(depth[fx] < depth[fy]) {
            std::swap(fx, fy);
        }
        depth[fx] += depth[fy];
        fa[fy] = fx;
    }
    bool check(int x, int y) {
        return find(x) == find(y);
    }
};
