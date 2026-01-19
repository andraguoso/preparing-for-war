#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> findDivs(ll num){
	vector<ll> divs;
	for(ll i=1; i<=sqrtl(num); i++){
		if(num%i==0){
			divs.push_back(i);
			if (i!=num/i){
				divs.push_back(num/i);
			}
		}
	}
	return divs;
}
ll getMES(ll num1, ll num2){
	ll maxSum = -1;
	for (ll k : findDivs(num2)){
	ll sum = num1*k + num2/k;
	if(sum%2==0 && sum>maxSum){
		maxSum = sum;
	}
	}
	return maxSum;
}
int main(){
	int t; cin>>t;
	while(t--){
	ll a, b; cin>>a>>b;
	cout << getMES(a, b) <<endl;
	}
}