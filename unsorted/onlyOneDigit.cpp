#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        if(100 <= x) {
            int a = x/100;
            int b = (x%100)/10;
            int c = x%10;
            cout << min({a,b,c});
        }
        else if(10 <= x) {
            int a = x/10;
            int b = x%10;
            cout << min(a,b);
        }
        else cout << x;
    }
}
