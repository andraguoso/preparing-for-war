//solved
#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string a, b, c;
        cin >> a >> b >> c;
        char firstA = a[0];
        char firstB = b[0];
        char firstC = c[0];
        cout << firstA << firstB << firstC << endl;
    }
}