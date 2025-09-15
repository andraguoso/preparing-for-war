#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    cin >> t;
    int n = s.length();
    int count = 0;
    for (int j=0; j<n; j++){
        if (t[j] == s[n-j-1]){
            count++;
        }
    }
    if (count == n){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}