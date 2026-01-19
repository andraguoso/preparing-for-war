//solved
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    while (n--){
        string statement;
        cin >> statement;
        if (statement == "++X" || statement == "X++"){
            x++;
        }
        else if (statement == "--X" || statement == "X--"){
            x--;
        }
    }
    cout << x;
}