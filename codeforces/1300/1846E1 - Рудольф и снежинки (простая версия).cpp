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
     bool ans=false;
     for(ll k=2; k<=1e3 ;k++){
         ll check=k*k*k;
         while(check<1e12){
              if(check==n*(k-1)+1){ans=true; break;}
              check*=k;
         }
         if(ans==true)break;
     }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;}
