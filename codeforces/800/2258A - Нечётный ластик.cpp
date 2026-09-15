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
     cout<<gcd(v[0],v[v.size()-1])<<endl; 
        
}
return 0;}
