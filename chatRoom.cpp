#include <bits/stdc++.h>
using namespace std;

int main() {
string s; cin>>s;
bool misunderstood = false;
for (int i=1; i<s.size(); i++){
    if(s[i]=='e' && (s[i-1]!='h' && s[i-1]!='e')){misunderstood = true;}
    else if(s[i]=='l' && (s[i-1]!='l' && s[i-1]!='e')){misunderstood = true;}
    else if(s[i]=='o' && (s[i-1]!='l' && s[i-1]!='o')){misunderstood = true;}
}
if(!misunderstood){cout<<"YES";}
else{cout<<"NO";}
}