#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){ 
    string num;
    cin >> num;
    if (int(num[0])+int(num[1])+int(num[2])==int(num[3])+int(num[4])+int(num[5])){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
}