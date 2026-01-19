#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
const ll MOD = 1e9 +7;
ll ferth(ll a, ll b){
    if(b==0) return 1;
    if(b%2==0) {ll x = ferth(a, b/2); return (x*x)%MOD;}
    else {ll x = ferth(a, (b-1)/2); return ((((x*x)%MOD)*a)%MOD);}
}
void solve(){
    ll a, b; cin>>a>>b;
    b = b%(MOD - 1);
    cout<<ferth(a, b)<<endl;
}
int main() {
	fastio;
    int n; cin>>n;
    while(n--) solve();
}