#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
const ll MOD = 1e9 +7;
ll f(ll b, ll c, ll m){
    if(c==0) return 1;
    if(c==1) return b%m;
    ll x=f(b, c/2, m);
    if(c%2==0) return (x*x)%m;
    else return (((x*x)%m)*b)%m;
    }
void sol(){
    ll a,b,c; cin>>a>>b>>c;
    ll exp = f(b, c, MOD-1);
    cout<<f(a, exp, MOD)<<endl;
}
int main(){
    int n; cin>>n;
    while(n--) sol();
}