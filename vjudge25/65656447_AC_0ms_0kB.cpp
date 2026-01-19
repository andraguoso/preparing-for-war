//bit strings
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
const ll MOD = 1e9+7;
ll alatum(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll x = alatum(a, b/2);
    if(b%2==0) return (x*x)%MOD;
    else return (((x*x)%MOD)*a)%MOD;
}
int main(){
    ll n; cin>>n;
    cout<<alatum(2, n);
}