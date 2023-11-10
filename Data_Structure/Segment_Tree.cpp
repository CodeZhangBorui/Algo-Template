#define N 100005

struct StreeNode{
    int l,r,sum,tag,len;
    StreeNode operator+(const StreeNode &x) const {
        return {l, x.r, sum + x.sum, 0, len + x.len};
    }
};

struct SegTree {
    int data[N];
    StreeNode stree[N << 2];

    inline void pushup(int now) {
        stree[now] = stree[now << 1] + stree[now << 1 | 1];
    }
    void build(int now, int l, int r) {
        if(l == r) {
            stree[now] = {l, l, data[l], 0, 1};
            return;
        }
        int mid = (l + r) >> 1;
        build(now << 1, l, mid);
        build(now << 1 | 1, mid + 1, r);
        pushup(now);
    }
    void init(int length) {
        build(1, 1, length);
    }
    void givetag(int now, int tag) {
        if(stree[now].l == stree[now].r) {
            stree[now].sum += tag;
            return;
        }
        stree[now].tag += tag;
        stree[now].sum += stree[now].len * tag;
    }
    void pushdown(int now) {
        givetag(now << 1, stree[now].tag);
        givetag(now << 1 | 1, stree[now].tag);
        stree[now].tag = 0;
    }
    void modify(int now, int l, int r, int v) {
        if(stree[now].tag) {
            pushdown(now);
        }
        if(stree[now].l >= l && stree[now].r <= r) {
            givetag(now, v);
            return;
        } else if(stree[now].l > r || stree[now].r < l) {
            return;
        } else {
            modify(now << 1, l, r, v);
            modify(now << 1 | 1, l, r, v);
        }
        pushup(now);
    }
    void modify(int l, int r, int v) {
        modify(1, l, r, v);
    }
    int query(int now, int l, int r) {
        if(stree[now].tag) {
            pushdown(now);
        }
        if(stree[now].l >= l && stree[now].r <= r) {
            return stree[now].sum;
        }
        if(stree[now].l > r || stree[now].r < l) {
            return 0;
        }
        return query(now << 1, l, r) + query(now << 1 | 1, l, r);
    }
    int query(int l, int r) {
        return query(1, l, r);
    }
};
