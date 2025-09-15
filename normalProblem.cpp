#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string a;
        cin >> a;
        for (int i=0; i<a.size(); i++){
            a[i] = a[a.size()-i-1];
            if (a[i] == 'q'){
                a[i] = 'p';
            }
            else if(a[i]=='p'){
                a[i]='q';
            }
        }
        cout << a << endl;
    }
}