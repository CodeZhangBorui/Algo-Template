#include <cstring>
#include <queue>
#include "../Graph_Theory/Star_representation.cpp"

std::queue<int> Q;
bool vis[N];
int dist[N], cnt[N];
bool spfa(int root) { // bool -> 是否有最短路
    memset(dist, 0x3f, sizeof(dist));
    /* or use this:
    for(int i = 0; i < N; i++) {
        dist[i] = 0x7fffffff;
    }
    */
    memset(vis, 0, sizeof(vis));
    dist[root] = 0;
    vis[root] = 1;
    Q.push(root);
    while(!Q.empty()) {
        int x = Q.front();
        Q.pop();
        vis[x] = 0;
        for(int i = head[x]; i; i = Next[i]) {
            int t = ver[i], d = edge[i];
            if(dist[t] > dist[x] + d) {
                dist[t] = dist[x] + d;
                cnt[t] = cnt[x] + 1;
                if(cnt[t] >= n) {
                    return false;
                }
                if(!vis[t]) {
                    Q.push(t);
                    vis[t] = 1;
                }
            }
        }
    }
    return true;
}
