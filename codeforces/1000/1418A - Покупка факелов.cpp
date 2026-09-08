#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
     ll x,y,k;
     cin>>x>>y>>k;
     
     ll need=(y+1)*k-1;
     ll ans=k;   
     ans+=(need+x-1-1)/(x-1);
     cout<<ans<<endl;
}
return 0;}
