/*
 * 求 1 ~ n 中所有整数在模 p 意义下的乘法逆元
 * 这里 a 模 p 的乘法逆元定义为 ax ≡ 1 (mod p) 的解
 */
#include <cstdio>

#define N 1000000

int naive[N];

int main() {
    int n, p;
    scanf("%d%d", &n, &p);
    naive[1] = 1;
    puts("1");
    for(int i = 2; i <= n; i++) {
        naive[i] = (long long)(p - p / i) * naive[p % i] % p;
        printf("%d\n", naive[i]);
    }
}
