#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int q; cin>>q;
    map<ll, ll> a;
    while(q--){
        int n; cin>>n;
        if(n==0){
            ll k,v; cin>>k>>v;
            a[k]=v;
        }
        if(n==1){
            ll k; cin>>k;
            cout<<a[k]<<endl;
        }
    }
}