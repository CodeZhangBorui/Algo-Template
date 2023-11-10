#include <cstring>

#define N 3000005

struct Trie {
    int Next[N][70], tot;
    int cnt[N];
    void init() {
        for(int i = 0; i <= tot; i++) {
            for(int j = 0; j < 70; j++) {
                Next[i][j] = 0;
            }
            cnt[i] = 0;
        }
        tot = 0;
    }
    int char2int(char x) {
        if(x >= 'A' && x <= 'Z') {
            return x - 'A';
        } else if(x >= 'a' && x <= 'z') {
            return x - 'a' + 26;
        } else {
            return x - '0' + 52;
        }
    }
    void insert(char str[], int length) {
        int pos = 0;
        for(int i = 0; i < length; i++) {
            int ch = char2int(str[i]);
            if(!Next[pos][ch]) {
                Next[pos][ch] = ++tot;
            }
            pos = Next[pos][ch];
            cnt[pos]++;
        }
    }
    void insert(char str[]) {
        insert(str, strlen(str));
    }
    int find(char str[], int length) {
        int pos = 0;
        for(int i = 0; i < length; i++) {
            int ch = char2int(str[i]);
            if(!Next[pos][ch]) {
                return 0;
            }
            pos = Next[pos][ch];
        }
        return cnt[pos];
    }
    int find(char str[]) {
        return find(str, strlen(str));
    }
};
