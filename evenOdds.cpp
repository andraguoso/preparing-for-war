//loud and WRONG have to modify almost everything... the loop is wrong 
//should consider for n when its div by 2 and when its not
// 
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> newOrder(n);
    for (int i=0; i<n; i++){
        if (i <= n/2){
            newOrder[i] = 2*i;
        }
        else {
            newOrder[i] = 1 + 2*(i - 1 - n/2);
        }
    }
    cout << newOrder[k-1];
}