#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll t;
cin>>t;
while(t--){
     ll x,y,k;
     cin>>x>>y>>k;
     ll ans=y%x;
     k--;
     while(k>0){
        y++;
        x++;
        ans+=y%x;
        k--;
        if(y%x==y-x )break;  
     }
     ans=ans+k*(y%x);
     cout<<ans<<endl;
}
return 0;}
