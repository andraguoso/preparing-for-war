#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        string word;
        cin >> word;
        int n = word.length();
        if (n <= 10){
            cout << word;
        }
        else {
            cout << word[0] << n - 2 << word[n-1];
        }
	cout << endl;
    }
}