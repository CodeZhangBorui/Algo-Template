#include "../Graph_Theory/Star_Representation.cpp"

bool vis[N];
void dfs(int x) {
    vis[x] = 1;
    // Do something with x
    for(int i = head[x]; ~i; i = Next[i]) {
        int t = ver[i];
        if(vis[t]) continue;
        dfs(t);
    }
}
