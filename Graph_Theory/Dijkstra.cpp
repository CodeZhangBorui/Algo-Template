#include <cstring>
#include <queue>
#include "../Graph_Theory/Star_Representation.cpp"

std::priority_queue< std::pair<int, int> > Q;
bool vis[N];
int dist[N];
void dijkstra(int root) {
    memset(dist, 0x3f, sizeof(dist));
    /* or use this: 
    for(int i = 0; i < N; i++) {
        dist[i] = 0x7fffffff;
    }
    */
    memset(vis, 0, sizeof(vis));
    dist[root] = 0;
    Q.push(std::make_pair(0, root));
    while(!Q.empty()) {
        int x = Q.top().second;
        Q.pop();
        if(vis[x]) continue;
        vis[x] = 1;
        for(int i = head[x]; i; i = Next[i]) {
            int t = ver[i], d = edge[i];
            if(dist[t] > dist[x] + d) {
                dist[t] = dist[x] + d;
                Q.push(std::make_pair(dist[t], t));
            }
        }
    }
}
