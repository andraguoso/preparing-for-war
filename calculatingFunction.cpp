//solved
#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll n;
    cin >> n;
    if (n % 2 != 0){
        ll functionUnfair = -(n+1)*0.5;
        cout << functionUnfair; 
    }
    else {
        ll functionFair = n/2;
        cout << functionFair;
    }
}