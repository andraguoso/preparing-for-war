#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        ll a, b; cin>>a>>b;
        ll res=b-(a%b);
        if(a%b!=0){cout<<res<<endl;}
        else {cout<<0<<endl;}
    }
}