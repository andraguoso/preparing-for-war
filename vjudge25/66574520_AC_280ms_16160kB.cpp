#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,m; cin>>n>>m;
  set<pair<ll, ll>> a;
  while(m--){
    ll r,c; cin>>r>>c;
    bool cancel=false;
    for(int i=r-1; i<=r+1; i++){
      for(int j=c-1; j<=c+1; j++){
        if(a.contains({i,j})) cancel=true;
      }
    }
    if(!cancel) a.insert({r,c});
  }
  cout<<a.size();
}