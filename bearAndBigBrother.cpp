#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int count = 0;
    bool stat = true;
    while (stat){
        a = a*3;
        b = b*2;
        count++;
        if (a > b){
            stat = false;
        }
    }
    cout << count;
}