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
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];  
     int cnt=0;
     for(int i=0;i<n;i++){
        if(v[i]==0)cnt++;
     }   
     if(v[0]==0 && v[n-1]==0)cout<<0<<endl;
     else if((v[0]==0 || v[n-1]==0 )&& cnt>1 )cout<<1<<endl;
     else if(cnt>1)cout<<2<<endl;
     else cout<<-1<<endl;
}
return 0;}
