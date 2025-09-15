#include <iostream>
using namespace std;
int main(){
    string n; cin>>n;
    int countForZero = 0; int countForOne=0;
    for(int i=0; i<n.size(); i++){
        if(n[i]==n[i+1] && n[i]=='0'){
            countForZero++;
        }        
        if(n[i]==n[i+1] && n[i]=='1'){
            countForOne++;
        }
    }
    if (countForZero > 6 || countForOne>6){
        cout << "YES";
    }
    else {cout << "NO";}
}