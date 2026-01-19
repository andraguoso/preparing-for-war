#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll s1, s2, s3, s4; cin>>s1>>s2>>s3>>s4; //have to get how many diff ones exist
    ll count = 0;
    if(s1==s2 || s1==s3 || s1==s4){count++;}
    else if(s2==s3 || s2 == s4){count++;}
    else if(s3==s4){count++;}
    cout<<count;
}
