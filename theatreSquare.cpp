#include <iostream>
using namespace std; 
typedef long long ll;
int main(){
    ll n, m, a; cin>>n>>m>>a;
    if (n==m==a){cout<<1;}
    else {
    ll s = n/a;
    if(n%a!=0){s=n/a +1;}
    ll l = m/a;
    if(m%a!=0){l = m/a + 1;}
    cout << s+l;
    }
}