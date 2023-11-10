#define N 20004
#define M 1000006

int head[N << 1], ver[M << 1], edge[M << 1], Next[M << 1], n, m, tot;
void add(int x, int y, int z) {
    ver[++tot] = y;
    edge[tot] = z;
    Next[tot] = head[x];
    head[x] = tot;
}
