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
     string a,b;
     cin>>a>>b;
     ll cnt=0;
     for(int i=0;i<n;i++){
         if(a[i]!=b[i]){
             cnt++;
         }
     }  
     if(cnt%2==0){
         cout<<"YES\n";
     }
     else cout<<"NO\n";
        
}
return 0;}