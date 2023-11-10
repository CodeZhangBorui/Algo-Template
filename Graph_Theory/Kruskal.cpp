#include <algorithm>
#include "../Data_Structure/Union_Find_Set.cpp"

int n, m;

struct Edge{
    int u, v, w;
    bool operator<(const Edge x) const {
        return w < x.w;
    }
};
Edge edge[N];

int kruskal() {
    int cnt = 0, ans = 0;
    ufs processer;
    processer.init(n);
    std::sort(edge + 1, edge + m + 1);
    for(int i = 1; i <= m; i++) {
        int x = processer.find(edge[i].u);
        int y = processer.find(edge[i].v);
        if(x == y) continue;
        ans += edge[i].w;
        cnt++;
        processer.merge(x, y);
        if(cnt == n - 1) {
            break;
        }
    }
    if(cnt >= n - 1) {
        return ans;
    } else {
        return -1;
    }
}
