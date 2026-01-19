//solved
#include <iostream>
#include <string>
using namespace std;
int main(){
    string user;
    cin >> user;
    int n = user.length();
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool repetido = false;
        for (int j = 0; j < i; j++) {
            if (user[i] == user[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            count++; 
        }
    }
    if (count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
}