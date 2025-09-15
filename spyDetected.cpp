#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n; cin>>n;
	vector<int> a(n);
	int sum = 0;
	int target = 0;
	for (int i=0; i<n; i++){
		cin>>a[i];
		sum += a[i];
	}
	for (int i=0; i<n; i++){
		if((sum-a[i])%(n-1)==0){
			target=i+1;
		}
	}
	cout<<target<<endl;
    }
}