#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        ll n; cin>>n;
        vector<ll> answers;
        for(int k=1; k<19; k++){
            ll d = 1 + ll(pow(10, k));
            if(d>n){break;}
            if(n%d==0){
                answers.push_back(n/d);
            }
        }

        if(answers.size()>0){
            cout << answers.size()<<endl;
            for (int i=answers.size()-1; i>=0; i--){
                cout<<answers[i]<<" ";
        }
            cout << endl;
	}
        else {cout<<0<<endl;}
    }
}
