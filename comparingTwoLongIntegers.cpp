#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a, b;
    cin >> a;
    cin >> b;
    if (a < b){
        cout << "<";
    }
    else if (a > b){
        cout << ">";
    }
    else {
        cout << "=";
    }
}