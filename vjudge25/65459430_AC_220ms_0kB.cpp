#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
const int MOD = 1e9 +7;
const int MAX = 1e6+10;
int fact[MAX];
int prod(int a, int b){
    return (1LL*a*b)%MOD;
}
int pot(int a, int b){
    if(b==0) return 1;
    if(b==1) return a%MOD;
    if(b%2!=0) return prod(a, pot(a, b-1));
    int x=pot(a, b/2);
    return prod(x, x);
}
int div(int a){
//teorema de fermat: no div normal, resto*resto = número que quiero
    return pot(a, MOD-2);
}

int comb(int a, int b){
    return prod(fact[a], div(prod(fact[b], fact[a-b])));
}

void sol(){
    int a, b; cin>>a>>b;
    cout<<comb(a, b)<<endl;
}

int main(){
    fact[0]=1;
    for(int i=1; i<MAX; i++) fact[i] = prod(fact[i-1], i);
    fastio;
    int n; cin>>n;
    while(n--) sol();
    return 0;
}