#include <iostream>
typedef long long ll;
using namespace std;
ll getInitialValue(int times, ll num){
    while(times--){
    if(num>1 && (num-1)%3==0){
        num = (num-1)/3;
    }
    else {
        num=num*2;
    }
    }
    return num;
}
int main(){
    int t; cin>>t;
    while(t--){
        int k; ll x; cin>>k>>x;
        cout << getInitialValue(k, x) << endl;
    }
}