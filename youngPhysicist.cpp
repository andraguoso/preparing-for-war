#include <iostream>
using namespace std;
int main(){
    int n, x, y, z;
    x = 0;
    y = 0;
    z = 0;
    cin >> n;
    while (n--){
        int a, b, c;
        cin >> a >> b >> c;
        x = x + a;
        y = y + b;
        z = z + c;
    }
    if (x == 0 && y == 0 && z == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}