#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> lista(n);
    int count = 0;
    for (int i = 0; i <= n-1; i++){
        cin >> lista[i];
        if (lista[i] != 0){
        count++;
        }
    }
    if (count >= 1){
        cout << "HARD";
    }
    else {
        cout << "EASY";
    }
}