//solved
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string word;
    cin >> word;
    int countAnton = 0;
    int countDanik = 0; 
    for (int i=0; i<n; i++){
        if (word[i] == 'A'){
            countAnton++;
        }
        else if (word[i] == 'D'){
            countDanik++;
        }
    }
    if (countAnton < countDanik){
        cout << "Danik";
    }
    else if (countAnton == countDanik){
        cout << "Friendship";
    }
    else {
        cout << "Anton";
    }
}