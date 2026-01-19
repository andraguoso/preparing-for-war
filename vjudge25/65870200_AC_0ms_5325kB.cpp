#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    bool go=true;
    while(go){
        int n; cin>>n;
        if(n==0) go=false;
        else {
            ll prod = n*(n+1)*(2*n + 1)/6;
            cout<<prod<<endl;
        }
    }
}