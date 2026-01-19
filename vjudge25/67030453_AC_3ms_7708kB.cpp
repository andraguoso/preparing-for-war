#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int const MAX=1e6;
int f(int n){
    if(n%2==0) return n/2;
    return 3*n+1;
}
int main() {
	int s; cin>>s;
    int a[MAX]; a[0]=s;
    set<int> v; v.insert(s);
    for(int i=1; i<=MAX; i++){
        a[i]=f(a[i-1]);
        if(v.contains(a[i])){
            cout<<i+1; break;
        }
        v.insert(a[i]);
    }
}