//solved
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    for (int i = 1; i<=10; i++){
        n = n - 1;
        if (n % 3 == 0){
            cout << "First" << endl;
            break;
        }
        else {
            cout << "Second" << endl;
            break;
        }
    }
    }
}