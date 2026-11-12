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
    
     ll n,k;
     cin>>n>>k;

     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];     }
     
     vector<ll>suf(n+1,0);
     ll total=0;
     for(ll i=n-1;i>=0;i--){
        ll right=min(n,i+k+1);
        ll added=suf[i+1]-suf[right];
        v[i]=(v[i]+added)%2;
        suf[i]=suf[i+1]+v[i];
        total=(total+v[i])%2;
     }
     if(total%2!=0) cout<<"Alice"<<endl;
     else cout<<"Bob"<<endl;
     
}
return 0;}