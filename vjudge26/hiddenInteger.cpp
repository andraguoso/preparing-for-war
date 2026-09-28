// interactive problem
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string query(ll y) {
  cout << "? " << y << endl; string s; cin>>s;
  return s;
}
int main() {
  ll lo=0, hi=1e9 +1;
  while(lo+1<hi) {
    ll mid = (lo+hi)>>1;
    if(query(mid)=="NO") hi=mid;
    else lo=mid;
  }
  cout << "! " << hi << endl; return 0;
}
