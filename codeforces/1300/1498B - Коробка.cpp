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
     ll n,w;
     cin>>n>>w;
     map<ll,ll,greater<ll>>mp;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;}
     
    ll ans=0;
    bool flag=true;    
    while(flag==true){
        flag=false;
        ll size=w;
       for(auto const& [x,y]:mp){
           ll count=mp[x];
           while(size>=x && count>0){
            count--;
            size-=x;
           }
           if(count!=mp[x])flag=true;
           mp[x]=count;
           
       }
       ans++;

    }
cout<<ans-1<<endl;

        
}
return 0;}
