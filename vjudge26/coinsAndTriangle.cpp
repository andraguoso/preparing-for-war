// binary search
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 -1;
ll tri(ll n) {
    return n*(n+1)/2;
}
void sol() {
    ll n; cin>>n;
    ll hi = N, lo = 0;
    ll ans = 0;
    while(lo <= hi) {
        ll x = (lo + hi)/2;
        if(n < tri(x)) hi = x - 1;
        else if(n > tri(x)) { 
            lo =  x + 1; 
            ans = max(ans, x);
        }
        else {
            ans = x; break;
        }
    }
    cout << ans << "\n";
}
int main() {
    int t; cin>>t;
    while(t--) sol();
}
