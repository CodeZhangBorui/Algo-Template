#define ll long long

ll quickpower(ll n, ll k, ll p) {
    ll ans = 1;
    while(k) {
        if(k & 1) {
            ans = (ans * n) % p;
        }
        n = (n * n) % p;
        k >>= 1;
    }
    return ans;
}
