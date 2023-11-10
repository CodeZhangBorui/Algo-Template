#include <queue>
#include "../Graph_Theory/Star_Representation.cpp"

bool vis[N];
void bfs(int x) {
    std::queue<int> q;
    q.push(x);
    while(!q.empty()) {
        int f = q.front();
        // Do something with f
        q.pop();
        for(int i = head[f]; m; i = Next[i]) {
            int t = ver[i];
            if(vis[t]) continue;
            q.push(t);
            vis[t] = 1;
        }
    }
}
