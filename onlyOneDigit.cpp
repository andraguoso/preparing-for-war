#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        if (x < 1000 && 100 <= x){
            int a = x/100;
            int b = (x % 100)/10;
            int c = x % 10;
            cout << min({a,b,c});
        }
        if (x < 100 && 10 <= x){
            int a = x/10;
            int b = x % 10;
            cout << min(a,b);
        }
        if (x < 10){
            cout << x;
        }
    }
}