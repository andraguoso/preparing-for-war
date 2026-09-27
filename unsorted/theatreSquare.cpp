#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){
    ll n, m, a; cin>>n>>m>>a;
    if (n==m && m==a) cout<<1;
    else {
        ll s = n/a, l = m/a;
        if(n%a!=0) s=n/a +1;
        if(m%a!=0) l = m/a + 1;
        cout << s+l;
    }
}
