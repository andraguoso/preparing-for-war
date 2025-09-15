#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    int isOdd = 0; int isEven = 0;
    int odd=0; int even=0;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin>>numbers[i];
        if (numbers[i]%2!=0){
            isOdd++;
            odd+=i;}
        else {
            isEven++;
            even+=i;}
    }
    if (isOdd<isEven){cout<<odd+1;}
    else {cout<<even+1;}
}