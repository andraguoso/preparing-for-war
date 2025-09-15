#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    vector<int> integers(n);
    int width = 0;
    for(int i=0; i<n; i++){
        cin >> integers[i];
        if (integers[i] <= h){
            width++;
        }
        else {
            width += 2;
        }
    }
    cout << width;
}