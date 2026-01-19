#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    float sum=0;
    vector<int> pers(n);
    for(int i=0; i<n; i++){
        cin>>pers[i];
	float per=pers[i]/100.0;
        sum+=per;
    }
    cout<< fixed << setprecision(12)<<100*sum/n;
}