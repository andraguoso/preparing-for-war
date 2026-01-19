#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin>>a[i];
  set<int> na;
  for(auto x:a) na.insert(x);
  cout<<na.size()<<endl;
  for(auto x:na) cout<<x<<" ";
}