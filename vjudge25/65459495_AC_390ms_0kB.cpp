#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n; cin>>n;
    int e=0; int o=0;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0)e++;
        else o++;
    }
    if(e!=0 and o!=0) sort(a.begin(), a.end());
    for(ll x:a) cout<<x<<" "; cout<<endl;
}
int main() {
	int t; cin>>t;
    while(t--) solve();
}