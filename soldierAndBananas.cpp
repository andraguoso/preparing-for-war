#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    int k, w;
    ll n;
    cin >> k >> n >> w;
    ll sum = k*w*(w+1)*0.5;
    if (sum > n){
    cout << sum - n;
    }
    else {
        cout << 0;
    }
}