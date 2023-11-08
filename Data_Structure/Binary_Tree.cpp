#define N 500010

int data[N], n;

struct BinaryTree {
    int list[N];

    void init() {
        for(int i = 1; i <= n; i++) {
            insert(i, data[i]);
        }
    }
    int lb(int x) {
        return x & -x;
    }
    /* 将第 pos 个数加上 num */
    void insert(int pos, int num) {
        while(pos <= n) {
            list[pos] += num;
            pos += lb(pos);
        }
    }
    /* 查询位置 pos 的前缀和 */
    int query(int pos) {
        int sum = 0;
        while(pos > 0) {
            sum += list[pos];
            pos -= lb(pos);
        }
        return sum;
    }
};
