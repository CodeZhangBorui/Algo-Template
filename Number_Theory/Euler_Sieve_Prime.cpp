/*
 * 运行 oulas(n) 预处理 2~n 之间的所有素数存入数组 prime[] 中
 */
#define N 1000000

int prime[N], tot;
bool vis[N];
void getPrime(int n) {
    for(int i = 2; i <= n; i++) {
        if(!vis[i]) {
            prime[++tot] = i;
        }
        for(int j = 1; j <= tot && i * prime[j] <= n; j++) {
            vis[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}
