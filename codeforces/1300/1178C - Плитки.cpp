#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll x,y;
     cin>>x>>y;
     ll ans=1;
     for(int i=0;i<y+x;i++){
        ans*=2;
        ans%=MOD;
     } 
        cout<<ans<<endl;

return 0;}
