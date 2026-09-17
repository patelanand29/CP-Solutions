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
     ll n,m;
     cin>>n>>m;
     vector<ll>v(n),b(m);
     for(int i=0;i<n;i++)cin>>v[i]; 
     for(int i=0;i<m;i++)cin>>b[i];
     
     ll cost=0;
     sort(v.rbegin(),v.rend());
     int idx=0;
     for(int i=0;i<n;i++){
        if(b[v[i]-1]>b[idx] && idx<v[i] && idx<m){
            cost+=b[idx];
            idx++;
        }
        else cost+=b[v[i]-1];
   }
   cout<<cost<<endl;
}
return 0;}
