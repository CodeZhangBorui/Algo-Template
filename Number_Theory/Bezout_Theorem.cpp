/*
给定一个包含 n 个元素的整数序列 A，记作 A_1,A_2,A_3,…,A_n
求另一个包含 n 个元素的待定整数序列 X，记 S= ∑_(i=1)^n▒〖A_i  × X_i 〗，使得 S>0 且 S 尽可能的小
*/
#include <cstdio>
#include "../Number_Theory/Greatest_Common_Divisor.cpp"

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0, inp;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &inp);
        if(inp < 0) {
            inp = -inp;
        }
        ans = gcd(ans, inp);
    }
    printf("%d", ans);
}
