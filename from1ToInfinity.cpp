#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t; 
    while(t--){
        ll k; cin >> k;
        string numbers;
        ll sum = 0; 
        for(int i=0; i<k; i++){
            numbers += to_string(i+1);
            cin >> numbers[i];
            sum += to_integer(numbers[i]);
        }
        cout << sum << endl;
    }
}